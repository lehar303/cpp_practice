#include<iostream>

int main(){

    int data[] {11,2,52,53,9,13,5,7,12,11};
    int max;
    int *p_add{};
    max = data[0];
    for(size_t i{0}; i< std::size(data); ++i){
        if(max < data[i])
        {    
            max = data[i];
            p_add = &data[i];
        }
    }

    std::cout << max << std::endl;

    return 0;
}