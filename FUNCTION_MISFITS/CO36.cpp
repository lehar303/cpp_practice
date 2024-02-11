#include<iostream>

int odd(){
    static int odd_number = 0;
    if(odd_number == 0)
        return ++odd_number;
    else
        return odd_number +=2;
}

void print_odds(unsigned int count)
{
    for(size_t i = 0;i < count; ++i){
        std::cout << odd() << " ";
    }
}

int main(){

    //std::cout << odd() << "\n";
    //std::cout << odd() << "\n";
    //std::cout << odd() << "\n";

    print_odds(10);



    return 0;
}