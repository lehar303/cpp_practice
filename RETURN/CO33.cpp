#include<iostream>

const double* find_max_address(double scores[], size_t count){
    size_t max_index{};
    double max = scores[0];
    for(size_t i{0}; i < count ; ++i){
        if(scores[i] > max){
        max = scores[i];
        max_index = i;
    }
 }

    return &scores[max_index];
}

int main(){

     double array[] {-3.0,-2.0,-5.0};
    const double *a = find_max_address(array,std::size(array));
    std::cout << *a << std::endl;

    return 0;
}