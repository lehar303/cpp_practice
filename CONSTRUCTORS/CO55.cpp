#include<iostream>

class Box {
	public : 
	//methods
	Box() = default;
	
	Box(double width, double length, double height)
	 : m_width(width) , m_length(length), m_height(height){

	 }

	double base_area() const{
		return m_width * m_length;
	}
	double volume() const{
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

int main(){

     Box b1(3,3,10);
    std::cout << "volume : " << b1.volume() << std::endl;

    return 0;
}