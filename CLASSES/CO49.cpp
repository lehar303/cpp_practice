#include<iostream>
#include"CO49.hpp"


int main(){

    /*Box box;
    box.m_width = 10;
    box.m_length = 20;
    box.m_height = 30;
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;*/

    Box box(10.1,20.4,30.3);
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;

    return 0;
}