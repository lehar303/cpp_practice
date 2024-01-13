#include<iostream>

void name(const std::string& name){

    std::cout << name << std::endl;

}

int main(){

    std::string_view sv = "yo";

   // name(sv);
   name(std::string(sv));

    return 0; 
}