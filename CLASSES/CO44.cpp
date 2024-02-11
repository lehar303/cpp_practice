#include<iostream>

class Box{
    public:
        double m_width{1};
        double m_length{1};
        double m_height{1};
    public:
        double base_area(){
            return m_length*m_width;
        }

        double volume(){
            return m_height * m_length* m_width;
        }


};

int main(){

    Box box;
    box.m_width = 10;
    box.m_length = 20;
    box.m_height = 30;
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;

    return 0;
}