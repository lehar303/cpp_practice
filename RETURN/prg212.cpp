#include<iostream>

auto a(int val){
    if(val<10)
        return static_cast<double>(22);
    else
        return 55.5;
}

int main(){

    auto result = a(7);
    std::cout << result << '\n';
    std::cout << sizeof(result) << '\n';


    return 0;
}