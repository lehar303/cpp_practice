#include<iostream>
#include<type_traits>
#include<string>


template<typename T>
concept ConvertibleToStdString =  std::is_convertible_v<T, std::string>;

template<typename T>
requires ConvertibleToStdString<T>
std::string concatenate(T a, T b){
    return a + b;
}

int main(){

    //auto result = concatenate(22.22,33.33);
   //std::cout << "result : " << result << std::endl;

    return 0;
}