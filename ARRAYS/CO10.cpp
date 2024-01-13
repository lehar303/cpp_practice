#include<iostream>

int main(){

    int data[] {1,2,4,5,1,8,2,3,6,1,4,2};
    int collection_size = 0;
    int no_of_unique_ele = 0;

    for(int element: data){
        ++collection_size;

    }

    int unique_element_array[collection_size];

    for(size_t i{0}; i< collection_size; ++i){
        if(data[i] != data[i+1])
        {
            ++no_of_unique_ele;
            unique_element_array[i] = data[i];
        }
    }

    std::cout << "The collection contains " << no_of_unique_ele << ", they are:  ";

    for(size_t i{0}; i< no_of_unique_ele; ++i){
        std::cout << unique_element_array[i] << " " ;
    }

    return 0;
}