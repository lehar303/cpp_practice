#include<iostream>
#include<ctime>
int main(){

    std::srand(std::time(0));
    /*int random_num = std::rand();
    std::cout << "Random number" << random_num << std::endl;

    for(size_t i{0}; i<20; ++i){
        random_num = std::rand();
        std::cout << "Loop" << i << " " << random_num << std::endl;
    }*/

    int random_num_2; 

    for(size_t i{0}; i<20; ++i){
        random_num_2 = std::rand() % 11;
        std::cout << "Loop" << i << " " << random_num_2 << std::endl;
    }



    return 0;
}