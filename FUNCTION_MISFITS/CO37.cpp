#include<iostream>

unsigned int factorial(unsigned int n){
    if(n!=0){
        return n * factorial(n-1);
    }
    return 1;
}

int main(){

    std::cout << factorial(5) << "\n";
    return 0;
}