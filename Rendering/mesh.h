#pragma once
#ifndef MESH_H
#define MESH_H

#include <glad/glad.h>  // holds all OpenGL type declarations

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Joint.h"
#include "shader.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Vertex
{
    // position
    glm::vec3 Position;
    // normal
    glm::vec3 Normal;
    // texCoords
    glm::vec2 TexCoords;
    // tangent
    glm::vec3 Tangent;
    // bitangent
    glm::vec3 Bitangent;
    // jointIndices
    glm::ivec3 JointIndices;
    // jointWeights
    glm::vec3 JointWeights;
};

struct Texture
{
    unsigned int id;
    string       type;
    string       path;
};

class Mesh
{
  public:
    /*  Mesh Data  */
    vector<Vertex>       vertices;
    vector<unsigned int> indices;
    vector<Texture>      textures;
    vector<Joint>        joints;
    unsigned int         VAO;

    unordered_map<string, Joint*> joints_map;

    /*  Functions  */
    // constructor
    Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures, vector<Joint>& joints,
         vector<pair<int, int>> parent_children)
        : vertices(vertices), indices(indices), textures(textures), joints(joints)
    {
		// this is necessary because the memory locations of the joints specifically are different because the vector is copied locally
        for (auto pc : parent_children) this->joints[pc.first].push_back_child(&this->joints[pc.second]);

        // just graphics stuff, setting up the VAO and dumping the mesh data to video-mem
        setupMesh();

        // Armature
        // Armature_Spine
        // Armature_Head
        // Armature_Shoulder_L
        // Armature_Shoulder_R
        // Armature_Thigh_L
        // Armature_Thigh_R
        // Armature_Upper_Arm_L
        // Armature_Upper_Arm_R
        // Armature_Shin_L
        // Armature_Shin_R
        // Armature_Lower_Arm_L
        // Armature_Lower_Arm_R

        joints_map = unordered_map<string, Joint*>();
        for (auto i = 0; i < joints.size(); i++) joints_map[this->joints[i].name] = &this->joints[i];

        // joints_map["Armature_Head"]->set_y_axis_rotation(1.0);
        joints_map["Armature_Thigh_L"]->set_x_axis_rotation(1.0);
        joints_map["Armature_Thigh_R"]->set_x_axis_rotation(-1.0);
        joints_map["Armature_Upper_Arm_L"]->set_x_axis_rotation(1.0);
        joints_map["Armature_Upper_Arm_R"]->set_x_axis_rotation(-1.0);

        joints_map["Armature_Lower_Arm_L"]->set_z_axis_rotation(-1.0);
        joints_map["Armature_Lower_Arm_R"]->set_z_axis_rotation(-1.0);

        joints_map["Armature_Shin_L"]->set_z_axis_rotation(1.0);
        joints_map["Armature_Shin_R"]->set_z_axis_rotation(-1.0);
    }

    // render the mesh
    void Draw(Shader shader)
    {
        // bind appropriate textures
        unsigned int diffuseNr  = 1;
        unsigned int specularNr = 1;
        unsigned int normalNr   = 1;
        unsigned int heightNr   = 1;
        for (unsigned int i = 0; i < textures.size(); i++)
        {
            glActiveTexture(GL_TEXTURE0 + i);  // active proper texture unit before binding
            // retrieve texture number (the N in diffuse_textureN)
            string number;
            string name = textures[i].type;
            if (name == "texture_diffuse")
                number = std::to_string(diffuseNr++);
            else if (name == "texture_specular")
                number = std::to_string(specularNr++);  // transfer unsigned int to stream
            else if (name == "texture_normal")
                number = std::to_string(normalNr++);  // transfer unsigned int to stream
            else if (name == "texture_height")
                number = std::to_string(heightNr++);  // transfer unsigned int to stream

            // now set the sampler to the correct texture unit
            glUniform1i(glGetUniformLocation(shader.ID, (name + number).c_str()), i);
            // and finally bind the texture
            glBindTexture(GL_TEXTURE_2D, textures[i].id);
        }

        auto transforms = vector<glm::mat4>();
        for (auto j : joints) transforms.push_back(j.create_transform_matrices());
        transforms.push_back(glm::mat4(1.0f));

        glUniformMatrix4fv(glGetUniformLocation(shader.ID, "jointTransforms"), 13, GL_FALSE, glm::value_ptr(transforms[0]));

        // draw mesh
        glBindVertexArray(VAO);
        glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, 0);
        glBindVertexArray(0);

        // always good practice to set everything back to defaults once configured.
        glActiveTexture(GL_TEXTURE0);
    }

  private:
    /*  Render data  */
    unsigned int VBO, EBO;

    /*  Functions    */
    // initializes all the buffer objects/arrays
    void setupMesh()
    {
        // create buffers/arrays
        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);
        glGenBuffers(1, &EBO);

        glBindVertexArray(VAO);
        // load data into vertex buffers
        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        // A great thing about structs is that their memory layout is sequential for all its items.
        // The effect is that we can simply pass a pointer to the struct and it translates perfectly to a glm::vec3/2 array
        // which again translates to 3/2 floats which translates to a byte array.
        glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(Vertex), &vertices[0], GL_STATIC_DRAW);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), &indices[0], GL_STATIC_DRAW);

        // set the vertex attribute pointers
        // vertex Positions
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, Position));
        // vertex normals
        glEnableVertexAttribArray(1);
        glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, Normal));
        // vertex texture coords
        glEnableVertexAttribArray(2);
        glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, TexCoords));
        // vertex tangent
        glEnableVertexAttribArray(3);
        glVertexAttribPointer(3, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, Tangent));
        // vertex bitangent
        glEnableVertexAttribArray(4);
        glVertexAttribPointer(4, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, Bitangent));
        // vertex joint indices
        glEnableVertexAttribArray(5);
        glVertexAttribIPointer(5, 3, GL_INT, sizeof(Vertex), (void*)offsetof(Vertex, JointIndices));
        // vertex joint weights
        glEnableVertexAttribArray(6);
        glVertexAttribPointer(6, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, JointWeights));

        glBindVertexArray(0);
    }
};
#endif