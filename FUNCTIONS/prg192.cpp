#include<iostream>

constexpr int val(int value)
{
    return 3 * value;
}

consteval int mul(int mul){
    return 5*mul;
}

int main(){
    int a = 5;

    //std::cout << "Enter a number" << std::endl;
    //std::cin >>
    int result = val(a);
    std::cout << result << std::endl;

    int result1 = mul(5);
    std::cout << result1 << "\n" ;

    return 0; 
}