#include<iostream>

int main()
{
    int data1[] {1,2,3,4,5,66,77};
    int data2[] {10,20,30,40,50,60};

    int *new_array = new int[sizeof(data1) + sizeof(data2)]{};

    for(size_t i{0}; i<sizeof(data1); ++i){
        new_array[i] = data1[i];
    }

    size_t i=0;
    //for(i = i+sizeof(data); i< )
    

    return 0;
}