#include "GLTexture.h"

// THIS NEEDS TO BE IN ONE CPP FILE ALONE
#define STB_IMAGE_IMPLEMENTATION
#include "Libraries/stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "Libraries/stb_image_write.h"

namespace gltexture
{
    int    current_max_id   = 0;
    GLuint atlas_texture_id = -1;

    std::vector<std::string> paths;
    std::vector<mapbox::Bin> bins;
    std::vector<GLTexture*>  textures;

    GLTexture* AllocateTextureForLoading(std::string texture_path)
    {
        for (int i = 0; i < paths.size(); i++)
            if (paths[i] == texture_path) return textures[i];

        auto texture = new GLTexture();

        int x, y, nrChannels;
        stbi_info(texture_path.c_str(), &x, &y, &nrChannels);

        texture->width  = x;
        texture->height = y;
        texture->id     = current_max_id++;

        bins.push_back(mapbox::Bin(texture->id, x, y));
        paths.push_back(texture_path);
        textures.push_back(texture);

        return texture;
    }

    // TODO: everything should be functional programming
    unsigned int GenerateAtlas(bool flip_vertically)
    {
        // If you don't want to think about the size of the sprite,
        // the `autoResize` option will allow it to grow as needed..
        mapbox::ShelfPack::ShelfPackOptions creation_options;
        mapbox::ShelfPack::PackOptions      run_options;
        creation_options.autoResize = true;
        run_options.inPlace         = true;
        mapbox::ShelfPack sprite(10, 10, creation_options);

        auto __ = sprite.pack(bins, run_options);

        sprite.shrink();

        unsigned int atlas_width  = sprite.width();
        unsigned int atlas_height = sprite.height();

        // 4 for RGBA
        char* full_data = new char[atlas_width * atlas_height * 4];
        for (int i = 0; i < textures.size(); i++)
        {
            textures[bins[i].id]->atlas_x      = bins[i].x;
            textures[bins[i].id]->atlas_y      = bins[i].y;
            textures[bins[i].id]->atlas_width  = atlas_width;
            textures[bins[i].id]->atlas_height = atlas_height;

            int width, height, nrChannels;
            stbi_set_flip_vertically_on_load(flip_vertically);  // tell stb_image.h to flip loaded texture's on the y-axis.
            // FileSystem::getPath("resources/textures/container.jpg").c_str()
            unsigned char* temp_data = stbi_load(paths[i].c_str(), &width, &height, &nrChannels, 0);
            if (temp_data)
            {
                for (int y = 0; y < height; y++)
                    memcpy(&full_data[(bins[i].x * 4) + ((y + bins[i].y) * atlas_width * 4)], &temp_data[(y * width * 4)],
                           size_t(width * 4));
            }
            else
            {
                fprintf(stderr, "Failed to load texture");
            }
            stbi_image_free(temp_data);
        }

        // TEXTURES
        unsigned int atlas_texture_id;
        glGenTextures(1, &atlas_texture_id);
        glBindTexture(GL_TEXTURE_2D, atlas_texture_id);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);

        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, atlas_width, atlas_height, 0, GL_RGBA, GL_UNSIGNED_BYTE, full_data);
        glGenerateMipmap(GL_TEXTURE_2D);

        // OUTPUT ATLAS FOR DEBUGGING
        // stbi_write_png("Resources/Atlas.png", atlas_width, atlas_height, 4, full_data, atlas_width * 4);

        delete[] full_data;

        return atlas_texture_id;
    }

    void ClearCurrentAtlas()
    {
        current_max_id = 0;
        glDeleteTextures(1, &atlas_texture_id);
    }

    // TODO: maybe use reference counted bin-packing, could be a performance increase
    //// Initialize the sprite with a width and height..
    // ShelfPack sprite(64, 64);
    // Bin*      bin;
    //
    //// Allocated bins are automatically reference counted.
    //// They start out having a refcount of 1.
    // std::array<int32_t, 3> ids = {100, 101, 102};
    // for (const auto& id : ids)
    //{
    //    bin = sprite.packOne(id, 16, 16);
    //    std::cout << *bin << std::endl;
    //}
    //
    ///* output:
    // Bin { id: 100, x: 0, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 1 }
    // Bin { id: 101, x: 16, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 1 }
    // Bin { id: 102, x: 32, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 1 }
    //*/
    //
    //// If you try to pack the same id again, shelf-pack will not re-pack it.
    //// Instead, it will increment the reference count automatically..
    // Bin* bin102 = sprite.packOne(102, 16, 16);
    // std::cout << *bin102 << std::endl;
    //
    ///* output:
    // Bin { id: 102, x: 32, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 2 }
    //*/
    //
    //// You can also manually increment the reference count..
    // Bin* bin101 = sprite.getBin(101);
    // sprite.ref(*bin101);
    // std::cout << *bin101 << std::endl;
    //
    ///* output:
    // Bin { id: 101, x: 16, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 2 }
    //*/
    //
    //// ...and decrement it!
    // Bin* bin100 = sprite.getBin(100);
    // sprite.unref(*bin100);
    // std::cout << *bin100 << std::endl;
    //
    ///* output:
    // Bin { id: 100, x: 0, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 0 }
    //*/
    //
    //// Bins with a refcount of 0 are considered free space.
    //// Next time a bin is packed, shelf-back tries to reuse free space first.
    //// See how Bin 103 gets allocated at [0,0] - Bin 100's old spot!
    // Bin* bin103 = sprite.packOne(103, 16, 15);
    // std::cout << *bin103 << std::endl;
    //
    ///* output:
    // Bin { id: 103, x: 0, y: 0, w: 16, h: 15, maxw: 16, maxh: 16, refcount: 1 }
    //*/
    //
    //// Bin 103 may be smaller (16x15) but it knows 16x16 was its original size.
    //// If that space becomes free again, a 16x16 bin will still fit there.
    // sprite.unref(*bin103);
    // Bin* bin104 = sprite.packOne(104, 16, 16);
    // std::cout << *bin104 << std::endl;
    //
    ///* output:
    // Bin { id: 104, x: 0, y: 0, w: 16, h: 16, maxw: 16, maxh: 16, refcount: 1 }
    //*/
}  // namespace gltexture