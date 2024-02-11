#include<iostream>

unsigned int count = 0;

void func_count(){

}

void func(){
    static int count = 0;
    std::cout << ++count << "\n";
}

int main(){



    return 0;
}