#include<iostream>
#include<concepts>
#include<type_traits>

//1
template<typename T>
concept myIntegral = std::is_integral_v<T>;

//2
template <typename T>
concept Multipliable = requires(T a, T b){
    a *b;
};

//3
template<typename T>
concept Incrementable = requires(T a){
    a+=1;
    ++a;
    a++;
};

/*template<typename T>
requires myIntegral<T>
T add(T a, T b){
    return a+b;
}*/

/*template<typename T>
T add(T a, T b)requires myIntegral<T>{
    return a+b;
}*/

/*myIntegral auto add(myIntegral auto a, myIntegral auto b){
    return a+b;
}*/

/*template <typename T>
requires Multipliable<T>
T add(T a, T b){
    return a+b;
}*/

template <typename T>
requires Incrementable<T>
T add(T a, T b){
    return a+b;
}

int main(){

    //int x = 6;
   // int y = 7;

   double x = 5.8;
   double y = 9.5;

   //std::string x = "Yo";
   //std::string y = "hi";

    add(x,y);


    return 0;
}