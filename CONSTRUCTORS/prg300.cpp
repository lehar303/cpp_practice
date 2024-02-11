#include <string>
#include<iostream>

class Square
{
public:
	 explicit Square(double side_param);
     Square( double side_param, const std::string& color_param, int shading_param);
	 ~Square();
    double surface() const;
    
private :
    double m_side;
    std::string m_color;
    int m_shading;
    double m_position;
};

Square::Square(double side_param )
     : Square{side_param,"black",6}
{
    m_position = 45.8;
    std::cout << "One param constructor called" << std::endl;
}

Square::Square( double side_param, const std::string& color_param, int shading_param )
    : m_side{side_param},m_color{color_param},m_shading{shading_param}
{
    std::cout <<  "Three param constructor called" << std::endl;
}

double Square::surface() const {
    return m_side*m_side;
}

Square::~Square()
{
    std::cout << "Square object destroyed"  << std::endl;
}

int main(){

    Square s1(100.0);
    std::cout << s1.surface() << "\n";


    return 0;
}