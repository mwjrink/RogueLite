#pragma once
#ifndef MODEL_H
#define MODEL_H

#include <glad/glad.h>

#include <assimp/postprocess.h>
#include <assimp/scene.h>
#include <assimp/Importer.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "mesh.h"
#include "shader.h"
#include "stb_image.h"

#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

unsigned int TextureFromFile(const char* path, const string& directory, bool gamma = false);

class Model
{
  public:
    /*  Model Data */
    vector<Texture> textures_loaded;  // stores all the textures loaded so far, optimization to make sure textures aren't
                                      // loaded more than once.
    vector<Mesh> meshes;
    string       directory;
    bool         gammaCorrection;

    /*  Functions   */
    // constructor, expects a filepath to a 3D model.
    Model(string const& path, bool gamma = false) : gammaCorrection(gamma) { loadModel(path); }

    Model() = default;

    // draws the model, and thus all its meshes
    void Draw(Shader shader)
    {
        for (unsigned int i = 0; i < meshes.size(); i++) meshes[i].Draw(shader);
    }

  private:
    /*  Functions   */
    // loads a model with supported ASSIMP extensions from file and stores the resulting meshes in the meshes vector.
    void loadModel(string const& path)
    {
        // read file via ASSIMP
        Assimp::Importer importer;
        const aiScene*   scene =
            importer.ReadFile(path, aiProcess_Triangulate | aiProcess_FlipUVs | aiProcess_CalcTangentSpace);
        // check for errors
        if (!scene || scene->mFlags & AI_SCENE_FLAGS_INCOMPLETE || !scene->mRootNode)  // if is Not Zero
        {
            cout << "ERROR::ASSIMP:: " << importer.GetErrorString() << endl;
            return;
        }
        // retrieve the directory path of the filepath
        directory = path.substr(0, path.find_last_of('/'));

        // process ASSIMP's root node recursively
        processNode(scene->mRootNode, scene);
    }

    // processes a node in a recursive fashion. Processes each individual mesh located at the node and repeats this process
    // on its children nodes (if any).
    void processNode(aiNode* node, const aiScene* scene)
    {
        // process each mesh located at the current node
        for (unsigned int i = 0; i < node->mNumMeshes; i++)
        {
            // the node object only contains indices to index the actual objects in the scene.
            // the scene contains all the data, node is just to keep stuff organized (like relations between nodes).
            aiMesh* mesh = scene->mMeshes[node->mMeshes[i]];
            meshes.push_back(processMesh(mesh, scene));

            // if (mesh->HasBones())
            //    for (auto it = 0; it < mesh->mNumBones; it++)
            //    {
            //        cout << mesh->mBones[it]->mName.C_Str() << endl;
            //        //mesh->mBones[it]->mOffsetMatrix;
            //        //mesh->mVertices[it].
            //    }

            //  Armature_Spine
            //  Armature_Thigh_L
            //	Armature_Shin_L
            //	Armature_Thigh_R
            //	Armature_Shin_R
            //	Armature_Shoulder_L
            //  Armature_Upper_Arm_L
            //	Armature_Lower_Arm_L
            //	Armature_Head
            //	Armature_Shoulder_R
            //	Armature_Upper_Arm_R
            //  Armature_Lower_Arm_R

            // mesh.
        }
        // after we've processed all of the meshes (if any) we then recursively process each of the children nodes
        for (unsigned int i = 0; i < node->mNumChildren; i++)
        {
            processNode(node->mChildren[i], scene);
        }
    }

    Mesh processMesh(aiMesh* mesh, const aiScene* scene)
    {
        // data to fill
        vector<Vertex>       vertices;
        vector<unsigned int> indices;
        vector<Texture>      textures;
        vector<Joint>        joints;

        vector<int> filled = vector<int>(mesh->mNumVertices);

        // Walk through each of the mesh's vertices
        for (unsigned int i = 0; i < mesh->mNumVertices; i++)
        {
            Vertex vertex;
            glm::vec3
                vector;  // we declare a placeholder vector since assimp uses its own vector class that doesn't directly
                         // convert to glm's vec3 class so we transfer the data to this placeholder glm::vec3 first.
            // positions
            vector.x        = mesh->mVertices[i].x;
            vector.y        = mesh->mVertices[i].y;
            vector.z        = mesh->mVertices[i].z;
            vertex.Position = vector;
            // normals
            vector.x      = mesh->mNormals[i].x;
            vector.y      = mesh->mNormals[i].y;
            vector.z      = mesh->mNormals[i].z;
            vertex.Normal = vector;
            // texture coordinates
            if (mesh->mTextureCoords[0])  // does the mesh contain texture coordinates?
            {
                glm::vec2 vec;
                // a vertex can contain up to 8 different texture coordinates. We thus make the assumption that we won't
                // use models where a vertex can have multiple texture coordinates so we always take the first set (0).
                vec.x            = mesh->mTextureCoords[0][i].x;
                vec.y            = mesh->mTextureCoords[0][i].y;
                vertex.TexCoords = vec;
            }
            else
                vertex.TexCoords = glm::vec2(0.0f, 0.0f);
            // tangent
            vector.x       = mesh->mTangents[i].x;
            vector.y       = mesh->mTangents[i].y;
            vector.z       = mesh->mTangents[i].z;
            vertex.Tangent = vector;
            // bitangent
            vector.x         = mesh->mBitangents[i].x;
            vector.y         = mesh->mBitangents[i].y;
            vector.z         = mesh->mBitangents[i].z;
            vertex.Bitangent = vector;
            vertices.push_back(vertex);

            filled[i] = 0;
        }
        // now wak through each of the mesh's faces (a face is a mesh its triangle) and retrieve the corresponding vertex
        // indices.
        for (unsigned int i = 0; i < mesh->mNumFaces; i++)
        {
            aiFace face = mesh->mFaces[i];
            // retrieve all indices of the face and store them in the indices vector
            for (unsigned int j = 0; j < face.mNumIndices; j++) indices.push_back(face.mIndices[j]);
        }
        // process materials
        aiMaterial* material = scene->mMaterials[mesh->mMaterialIndex];
        // we assume a convention for sampler names in the shaders. Each diffuse texture should be named
        // as 'texture_diffuseN' where N is a sequential number ranging from 1 to MAX_SAMPLER_NUMBER.
        // Same applies to other texture as the following list summarizes:
        // diffuse: texture_diffuseN
        // specular: texture_specularN
        // normal: texture_normalN

        for (auto i = 0; i < mesh->mNumBones; i++)
        {
            for (auto j = 0; j < mesh->mBones[i]->mNumWeights; j++)
            {
                auto index = mesh->mBones[i]->mWeights[j].mVertexId;
                if (filled[index] > 2) continue;
                vertices[index].JointIndices[filled[index]] = i;
                vertices[index].JointWeights[filled[index]] = mesh->mBones[i]->mWeights[j].mWeight;
                filled[index]++;
            }
        }

        // this is a huge loop
        for (auto i = 0; i < mesh->mNumVertices; i++)
        {
            if (filled[i] < 3)
            {
                auto weight = 0.0f;
                for (auto j = 0; j < 3; j++)
                {
                    if (j < filled[i])
                    {
                        weight += vertices[i].JointWeights[j];
                    }
                    else
                    {
                        vertices[i].JointIndices[j] = mesh->mNumBones;
                        vertices[i].JointWeights[j] = 1.0f - weight;
                        weight                      = 1.0f;
                    }
                }
            }
        }

        for (auto i = 0; i < mesh->mNumVertices; i++)
        {
            auto adjustment =
                1.0f / (vertices[i].JointWeights[0] + vertices[i].JointWeights[1] + vertices[i].JointWeights[2]);
            vertices[i].JointWeights[0] *= adjustment;
            vertices[i].JointWeights[1] *= adjustment;
            vertices[i].JointWeights[2] *= adjustment;

            // cout << filled[i] << endl;
            /*cout << vertices[i].JointIndices[0] << " " << vertices[i].JointIndices[1] << " " << vertices[i].JointIndices[2]
                 << endl;*/
        }

        auto to_check = vector<aiNode*>();
        auto mine     = vector<aiNode*>();

        auto q = queue<aiNode*>();
        for (auto i = 0; i < scene->mRootNode->mNumChildren; i++)
        {
            if ("Armature" == string(scene->mRootNode->mChildren[i]->mName.C_Str()))
            {
                q.push(scene->mRootNode->mChildren[i]);
                break;
            }
        }

        // This will break if there is a parent->child loop in the aiNode structure, mainly because if there is, fuck you
        while (!q.empty())
        {
            auto current = q.front();
            if (current == NULL) continue;
            cout << current->mName.C_Str() << endl;
            q.pop();
            to_check.push_back(current);
            for (auto i = 0; i < current->mNumChildren; i++) q.push(current->mChildren[i]);
        }

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

        // create all of the joints and add them to the joints vector in order so that the IDs line up with the vertex
        // weights in the shaders
        for (auto i = 0; i < mesh->mNumBones; i++)
        {
            for (auto node : to_check)
                if (node->mName == mesh->mBones[i]->mName)
                {
                    mine.push_back(node);
                    break;
                }

            joints.push_back(Joint(i, mesh->mBones[i]->mName.C_Str(), convertMatrix(mesh->mBones[i]->mOffsetMatrix),
                                   convertMatrix(mine.back()->mTransformation)));
        }

        vector<pair<int, int>> parent_children;

        // now set all of the child joints as children and what not
        for (auto i = 0; i < to_check.size(); i++)
            for (auto j = 0; j < to_check[i]->mNumChildren; j++)
                for (auto k = 0; k < joints.size(); k++)
                    for (auto l = 0; l < joints.size(); l++)
                        if (joints[k].name == to_check[i]->mChildren[j]->mName.C_Str() &&
                            joints[l].name == to_check[i]->mName.C_Str())
                        {
                            joints[l].push_back_child(&joints[k]);
                            parent_children.push_back(pair<int, int>(l, k));
                            break;
                        }

        // 1. diffuse maps
        vector<Texture> diffuseMaps = loadMaterialTextures(material, aiTextureType_DIFFUSE, "texture_diffuse");
        textures.insert(textures.end(), diffuseMaps.begin(), diffuseMaps.end());
        // 2. specular maps
        vector<Texture> specularMaps = loadMaterialTextures(material, aiTextureType_SPECULAR, "texture_specular");
        textures.insert(textures.end(), specularMaps.begin(), specularMaps.end());
        // 3. normal maps
        std::vector<Texture> normalMaps = loadMaterialTextures(material, aiTextureType_HEIGHT, "texture_normal");
        textures.insert(textures.end(), normalMaps.begin(), normalMaps.end());
        // 4. height maps
        std::vector<Texture> heightMaps = loadMaterialTextures(material, aiTextureType_AMBIENT, "texture_height");
        textures.insert(textures.end(), heightMaps.begin(), heightMaps.end());

        // return a mesh object created from the extracted mesh data
        return Mesh(vertices, indices, textures, joints, parent_children);
    }

    /**
     * @Max, this should be in a utility file or something, specifically for assimp
     * @param aiMat
     * @return transposed version of the aiMat to fit into glm's style of doing things
     */
    glm::mat4 convertMatrix(const aiMatrix4x4& aiMat)
    {
        return {aiMat.a1, aiMat.b1, aiMat.c1, aiMat.d1, aiMat.a2, aiMat.b2, aiMat.c2, aiMat.d2,
                aiMat.a3, aiMat.b3, aiMat.c3, aiMat.d3, aiMat.a4, aiMat.b4, aiMat.c4, aiMat.d4};
    }

    // checks all material textures of a given type and loads the textures if they're not loaded yet.
    // the required info is returned as a Texture struct.
    vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, string typeName)
    {
        vector<Texture> textures;
        for (unsigned int i = 0; i < mat->GetTextureCount(type); i++)
        {
            aiString str;
            mat->GetTexture(type, i, &str);
            // check if texture was loaded before and if so, continue to next iteration: skip loading a new texture
            bool skip = false;
            for (unsigned int j = 0; j < textures_loaded.size(); j++)
            {
                if (std::strcmp(textures_loaded[j].path.data(), str.C_Str()) == 0)
                {
                    textures.push_back(textures_loaded[j]);
                    skip = true;  // a texture with the same filepath has already been loaded, continue to next one.
                                  // (optimization)
                    break;
                }
            }
            if (!skip)
            {  // if texture hasn't been loaded already, load it
                Texture texture;
                texture.id   = TextureFromFile(str.C_Str(), this->directory);
                texture.type = typeName;
                texture.path = str.C_Str();
                textures.push_back(texture);
                textures_loaded.push_back(texture);  // store it as texture loaded for entire model, to ensure we won't
                                                     // unnecesery load duplicate textures.
            }
        }
        return textures;
    }
};

unsigned int TextureFromFile(const char* path, const string& directory, bool gamma)
{
    string filename = string(path);
    filename        = directory + '/' + filename;

    unsigned int textureID;
    glGenTextures(1, &textureID);

    int            width, height, nrComponents;
    unsigned char* data = stbi_load(filename.c_str(), &width, &height, &nrComponents, 0);
    if (data)
    {
        GLenum format;
        if (nrComponents == 1)
            format = GL_RED;
        else if (nrComponents == 3)
            format = GL_RGB;
        else if (nrComponents == 4)
            format = GL_RGBA;

        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexImage2D(GL_TEXTURE_2D, 0, format, width, height, 0, format, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        stbi_image_free(data);
    }
    else
    {
        std::cout << "Texture failed to load at path: " << path << std::endl;
        stbi_image_free(data);
    }

    return textureID;
}
#endif