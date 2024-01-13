#include<iostream>

void say_my_name(std::string_view name){
    std::cout << name << std::endl;
}

int main(){

    std::string name = "yo";
    //say_my_name(name);
    say_my_name("yo");

    return 0;
}