#include <iostream>
#include "dog.h"

int main(){

   const Dog dog1("Fluffy","Shepherd",2);
   
   dog1.print_info();
   std::cout << dog1.name() << "\n";
   // dog1.name() = "Bruno";
   dog1.print_info();


    return 0;
}