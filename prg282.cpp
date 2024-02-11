#include<iostream>

class Dog{
    std::string m_name;
};

struct Cat{
    std::string m_name;
};

int main(){

    Cat c;
    c.m_name = "Tom";

    Dog d;
    //d.m_name = "Bruno" error

    return 0;
}