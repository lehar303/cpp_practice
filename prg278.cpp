#include<iostream>
#include "cylinder.h"

int main(){

    Cylinder c1(10,10);
    c1.volume();

    //POinter to stack

    Cylinder* p_c1 = &c1;
    std::cout << "vol: " << (*p_c1).volume() << "\n";
    std::cout << "vol: " << p_c1->volume() << "\n";

    //HEAP
    Cylinder* p_c2 = new Cylinder(10,11);
    std::cout << p_c2->volume() << "\n";

    delete p_c2;

    return 0;
}