#include<iostream>

int main(){

    int data1[] {1,2,4,5,9,3,6,7,44,55}; 
    int data2[] {11,2,44,45,49,43,46,47,55,88};
    int common[10];
    int i = 0;

    for(auto element1: data1){
        for(auto element2: data2){
            if(element1 == element2)
            {
                common[i] = element1;
                i++;
            }
        }

    }

    std::cout << "There are " << i << " common elements: ";
    for(size_t j{0}; j < i ; ++j)
    {
        std::cout << common[j] << " ";
    }

    return 0;
}