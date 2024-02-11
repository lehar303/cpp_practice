#include<iostream>

const double PI {3.1415926535897932384626433832795};
class Cylinder {
    public : 
        //Constctors
        Cylinder() = default;
        Cylinder(double rad_param,double height_param = 5  );
        //Functions (methods)
        double volume();
        
        //Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};

/*Cylinder::Cylinder(double rad_param,double height_param){
    base_radius = rad_param;
    height = height_param;
    std::cout <<"Two param constructor called" << std::endl;
}*/

Cylinder::Cylinder(double rad_param, double height_param):
            base_radius(rad_param), height(height_param){}

double Cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

//Setter and getter methods
double Cylinder::get_base_radius(){
    return base_radius;
}
double Cylinder::get_height(){
    return height;
}

void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param){
    height = height_param;
}

int main(){

    Cylinder c1(4);
    std::cout << c1.get_base_radius() << " " << c1.get_height () << "\n";
    std::cout << "volume : " << c1.volume() << std::endl;
   
    return 0;
}

