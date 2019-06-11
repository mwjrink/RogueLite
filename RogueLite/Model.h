#pragma once

#include <glad/glad.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <string>
#include <vector>

#include <assimp/postprocess.h>
#include <assimp/scene.h>
#include <assimp/Importer.hpp>

#include <iostream>

#include "Libraries/stb_image.h"

#include "Mesh.h"

class Model
{
  public:
    Model(std::string const& path, bool gamma = false);
    void Draw(GLuint shader);

    std::vector<Texture> textures_loaded;
    std::vector<Mesh>    meshes;
    std::string          directory;
    bool                 gammaCorrection;

  private:
    /*  Model Data  */
    std::vector<Mesh> meshes;
    std::string       directory;
    /*  Functions   */
    void                 loadModel(std::string const& path);
    void                 processNode(aiNode* node, const aiScene* scene);
    Mesh                 processMesh(aiMesh* mesh, const aiScene* scene);
    std::vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type, std::string typeName);
};

unsigned int TextureFromFile(const char* path, const std::string& directory, bool gamma = false);
