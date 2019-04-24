#include "Level.h"

#include <algorithm>
#include <cctype>
#include <fstream>
#include <locale>

#include "Libraries/RapidXML/rapidxml.hpp"
#include "World.h"

namespace level
{
    Renderable r;

    unsigned int base_map_width  = 30;
    unsigned int base_map_height = 17;

#define w 152
    unsigned int* base_map = new unsigned int[30 * 17]{
        w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,
        w,   w,   w,   w,   w,   w,   w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,   321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, w,   w,   321,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 186, 186, 186, 186, 186, 186, 186,
        186, 186, 186, 186, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        249, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,   321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 249, 249, 249, 249, 249, 249, 249, 249, 249,
        249, 249, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 186, 186,
        186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, w,   w,   321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186,
        w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 249, 249, 249, 249,
        249, 249, 249, 249, 249, 249, 249, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,   321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,
        321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 249, 249, 249, 249, 249, 249,
        249, 249, 249, 249, 249, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, w,   w,   321, 321, 321, 321, 321, 321, 321, 321, 321,
        321, 321, 321, 321, 321, 321, 321, 321, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, 249, w,   w,   w,   w,
        w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,   w,
        w,   w,   w,   w};

    unsigned int* collision_map = new unsigned int[16 * 9]{
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  //..................................................
    };

    void Init(Level* target)
    {
        r = Renderable();
        r.tile_sheet =
            Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/pokemonground.png"), glm::ivec2(32, 32));
        r.position = glm::vec2(0.0f, 0.0f);
        r.size     = glm::vec2(world::width / target->width, world::height / target->height);
    }

    void RenderLevel(Level* render_target)
    {
        for (unsigned int l = 0; l < render_target->layers; l++)
            for (unsigned int y = 0; y < render_target->height; y++)
                for (unsigned int x = 0; x < render_target->width; x++)
                {
                    if (render_target->map[x, y, l] != 0)
                    {
                        r.position.x = (float)x * r.size.x * render_target->width / (float)render_target->width;
                        r.position.y = (float)y * r.size.y * render_target->height / (float)render_target->height;

                        r.current_tile_index =
                            render_target->map[x + (y + l * render_target->height) * render_target->width];

                        graphics::DrawRenderable(r, graphics::shaderProgram);
                    }
                }
    }

    //// trim from start (in place)
    //static inline void ltrim(std::string& s)
    //{
    //    s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not(std::ptr_fun<int, int>(std::isspace))));
    //}

    //// trim from end (in place)
    //static inline void rtrim(std::string& s)
    //{
    //    s.erase(std::find_if(s.rbegin(), s.rend(), std::not(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    //}

    //// trim from both ends (in place)
    //static inline void trim(std::string& s)
    //{
    //    ltrim(s);
    //    rtrim(s);
    //}

    //// trim from start (copying)
    //static inline std::string ltrim_copy(std::string s)
    //{
    //    ltrim(s);
    //    return s;
    //}

    //// trim from end (copying)
    //static inline std::string rtrim_copy(std::string s)
    //{
    //    rtrim(s);
    //    return s;
    //}

    //// trim from both ends (copying)
    //static inline std::string trim_copy(std::string s)
    //{
    //    trim(s);
    //    return s;
    //}

    //Level Load_Level(std::string file_path)
    //{
    //    std::ifstream temp(file_path);
    //    std::string   level_file(std::istreambuf_iterator<char>(temp), (std::istreambuf_iterator<char>()));
    //    temp.close();

    //    char* cstr = new char[level_file.length() + 1];
    //    strcpy(cstr, level_file.c_str());
    //    rapidxml::xml_document<> doc;
    //    doc.parse<0>(cstr);
    //    delete[] cstr;

    //    // tileset1(source, basegid)
    //    // layer(width, height, id)->data

    //    rapidxml::xml_node<>* node = doc.first_node("foobar");
    //    // cout << "Node foobar has value " << node->value() << "\n";
    //    for (rapidxml::xml_attribute<>* attr = node->first_attribute(); attr; attr = attr->next_attribute())
    //    {
    //        // cout << "Node foobar has attribute " << attr->name() << " ";
    //        // cout << "with value " << attr->value() << "\n";
    //    }

    //    std::string data;
    //    int         current;
    //    for (int i = 0; i < world::current_level.width * world::current_level.height; i++)
    //    {
    //        current      = data.find(current, ',');
    //        auto current = data.substr(0, current);
    //        std::stoi();
    //    }

    //    world::current_level        = level::Level();
    //    world::current_level.map    = level::base_map;
    //    world::current_level.width  = level::base_map_width;
    //    world::current_level.height = level::base_map_height;

    //    r = Renderable();
    //    r.tile_sheet =
    //        Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/pokemonground.png"), glm::ivec2(32, 32));
    //    r.position = glm::vec2(0.0f, 0.0f);
    //    r.size     = glm::vec2(world::width / target->width, world::height / target->height);
    //}
}  // namespace level
