
#include <string>
#include <string_view>
#include <iostream>
class Shape
{
public:
    Shape() = default;
    Shape(std::string_view description);
    ~Shape();
    
    virtual void draw() const{
        std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
    }

	virtual void draw(int color_depth) const {
		std::cout << "Shape::Drawing with color depth : " << color_depth << std::endl;
	}
    
protected : 
    std::string m_description{""};
};

Shape::Shape(std::string_view description) 
    : m_description(description)
{
}

Shape::~Shape()
{
}

class Oval : public Shape
{
public:
    Oval()= default;
    Oval(double x_radius, double y_radius,
                std::string_view description);
    ~Oval();
    

    /*virtual void draw() const override {
        std::cout << "Oval::draw() called. Drawing " << m_description <<
            " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius 
                    << std::endl;
    }*/

    /*virtual void draw(int color_depth, std::string_view color) const{
		std::cout << "Drawing with color depth : " << color_depth 
		<< " and color : " << color << std::endl;
	}*/

public:
    double get_x_rad() const{
        return m_x_radius;
    }
    
    double get_y_rad() const{
        return m_y_radius;
    }
 
private : 
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

Oval::Oval(double x_radius, double y_radius,
                std::string_view description)
    : Shape(description),m_x_radius(x_radius), m_y_radius(y_radius)
{
}

Oval::~Oval()
{
}

class Circle : public Oval
{
public:
    Circle() = default;
    Circle(double radius,std::string_view description);
    ~Circle();
    
 
   virtual void draw() const  {
        std::cout << "Circle::draw() called. Drawing " << m_description <<
            " with radius : " << get_x_rad() << std::endl;        
    }
  

};

Circle::Circle(double radius , std::string_view description) 
    : Oval(radius,radius,description)
{
}

Circle::~Circle()
{
}

int main(){

    //Shape * shape_ptr = new Circle(10,"Circle1");
    //shape_ptr->draw(45,"Red");
    Shape s1("Shape1");
    Oval o1(1,2,"Oval1");
    Circle c1(25,"Circl1");

    //s1.draw();
    //s1.draw(25);

    o1.draw();
    //o1.draw(25,"Pink");
    o1.draw(25);

    c1.draw();
    //c1.draw(44);

    return 0;
}

