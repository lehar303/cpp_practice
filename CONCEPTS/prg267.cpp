#include<iostream>

//concept
template <typename T>
concept TinyType = requires(T t){
    sizeof(T) < 4;
    requires sizeof(T) <= 4;
};

//concept
template <typename T>
concept Addable = requires(T a, T b){
    {a + b} -> std::convertible_to<int>;
};

//auto func
/*TinyType auto add(TinyType auto a, TinyType auto b){
    return a+b;
}*/

Addable auto add(Addable auto a, Addable auto b){
    return a+b;
}

int main(){

    double x = 67;
    double y = 56;

    std::cout << add(x,y) << "\n";


    return 0;
}