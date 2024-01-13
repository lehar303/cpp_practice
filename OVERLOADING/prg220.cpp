#include<iostream>

int max(int a, int b){
    std::cout << "int overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, double b){
    std::cout << "double overload called" << std::endl;
    return (a>b)? a : b; 
}


int main(){

    int x{4};
    int y{9};
    double a{5.4};
    double b{7.4};

    max(x,y);

    return 0;
}