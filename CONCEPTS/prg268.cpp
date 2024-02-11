#include<iostream>

template <typename T>
concept TinyType = requires(T t){
    sizeof(T) < 4;
    requires sizeof(T) <= 4;
};

/*template <typename T>
requires std::integral<T> || std::floating_point<T>
T add(T a, T b){
    return a+b;
}*/

template <typename T>
requires std::integral<T> && TinyType<T>
T add(T a, T b){
    return a+b;
}

int main(){

    double x = 6;
    double y = 4;

    //std::string x = "6";
    //std::string y = "9";

    //add(x,y);
    return 0;
}