#include<iostream>

int main(int argc, char **argv){

    std::cout << "No: " << argc << std::endl;

    for(size_t i{0}; i< argc; ++i){
        std::cout << argv[i] << std::endl;
    }

    return 0;
}