#include<iostream>

int find_character_v0(const std::string & str, char c){
    int not_found = -1;
    for(size_t i{0}; i< str.size(); ++i){
        if(str.c_str()[i] == c){
            return i;
        }
    }
    return not_found;
}

int main()
{

    std::string str1 {"Hello world in C++20"};
    char c{'c'};

    std::cout << find_character_v0(str1,c) << std::endl;

    return 0;
}