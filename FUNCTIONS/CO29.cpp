#include<iostream>

void insertion_sort(int array[], int size){

    for(unsigned int i{0}; i<size; ++i){
        int key = array[i];
        int j = i-1;

        while((j >=0) && (array[j] > key)){
            array[j+1] = array[j];
            j = j-1;
        }

        array[j+1] = key;

    }
}

void print_array(int array[],unsigned int size){
    for(unsigned int i=0; i<size; i++){
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}

int main(){

     int data[] = {6,3,5,7,4,2 };
     print_array(data,std::size(data));
     insertion_sort(data,std::size(data));
     print_array(data,std::size(data));

    return 0;
}