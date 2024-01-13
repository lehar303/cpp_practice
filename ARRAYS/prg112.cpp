#include<iostream>

int main(){

   /* int scores[10];

    for(size_t i{0}; i<10; ++i){
        scores[i] = i * 10;
    }    

    for(size_t i{0}; i<10; ++i){
        std::cout << scores[i] << std::endl;
    }

    int families[5] {12, 7,5};
     for(size_t i{0}; i<5; ++i){
        std::cout << families[i] << std::endl;
    }*/

    const int birds[] {10,12,15,12,56};
    //birds[2] = 8;
    
    int scores[] {2,5,8,2,5,6,9};
    int sum{0};

    for(int element: scores){
        sum +=element;
    }

    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}