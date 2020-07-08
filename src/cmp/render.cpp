#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <tuple>

#include <cmp/render.hpp>

extern "C"{
    #include <picoPNG/src/picopng.hpp>
}


namespace ECS
{

auto loadPNGFileVector(const std::string_view filename){

        // std::vector <unsigned char>pixels{};
        // unsigned long dw{0},dh{0};
        // std::ifstream file(filename ,std::ios::binary);
        
        // std::vector<unsigned char> filevec(
        //         std::istreambuf_iterator<char>{file}
        //     ,	std::istreambuf_iterator<char>{}		
        // );

        // decodePNG(pixels , dw , dh , filevec.data() , filevec.size());

        // return std::tuple{ dw , dh , pixels};

 }

    void RenderComponent_t::loadFromFile(const std::string filename)
    {
        // auto [dw , dh , pixels] = loadPNGFileVector(filename);

        // w=dw;	h=dh;
        // sprite.reserve(pixels.size()/4);
        // for (auto p =pixels.begin() ; p != pixels.end() ; p +=4){
        //     uint32_t pixel = 
        //     static_cast <uint32_t>(*(p+0))<<16
        // |	static_cast <uint32_t>(*(p+1))<<8
        // |	static_cast <uint32_t>(*(p+2))
        // |	static_cast <uint32_t>(*(p+3))<<24;
        //     sprite.push_back(pixel);
        // }
    }
} // namespace ECS

