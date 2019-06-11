#pragma once

#include <glad/glad.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <vector>

struct Vertex
{
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
    glm::vec3 Tangent;
    glm::vec3 Bitangent;
};

struct Texture
{
    unsigned int id;
    std::string  type;
    std::string       path;
};

class Mesh
{
  public:
    /*  Mesh Data  */
    std::vector<Vertex>       vertices;
    std::vector<unsigned int> indices;
    std::vector<Texture>      textures;
    /*  Functions  */
    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
    void Draw(GLuint shader);

  private:
    /*  Render data  */
    unsigned int VAO, VBO, EBO;
    /*  Functions    */
    void setupMesh();
};
