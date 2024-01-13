#include<iostream>

int main(){

    int *p_number{};
    double *frac{};

    /* std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(frac) << std::endl;

    int *p1{}, p2;

    std::cout << "sizeof(p1)" << sizeof(p1) <<std::endl;
    std::cout << "sizeof(p2)" << sizeof(p1) <<std::endl; */

    int int_var {43};
    int *p_int = &int_var;

    std::cout << int_var << std::endl;
    std::cout << p_int << std::endl;

    int int_var1{69};
    p_int = &int_var1;
    std::cout << p_int << std::endl;

    return 0;
}