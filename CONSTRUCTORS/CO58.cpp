#include<iostream>

class Reverser{
    Reverser(std::initializer_list<int>list){

    }
};

int main(){
    int i = 0;
    int input;
    std::initializer_list<int> a{};
    while(i != 5){
        std::cout << "Enter data" << std::endl;
        std::cin >> input;
        a.begin() + i = input;
        ++i;
    }
    

    Reverser r()

}