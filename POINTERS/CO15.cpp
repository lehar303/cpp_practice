#include<iostream>

int main(){

    int offshoot;
    int element;
    int data[] {1,3,6,3,9,3,5,7,2,11};
    std::cout <<"Enter the offshoot" << std::endl;
    std::cin >> offshoot;
    element =  *(data + offshoot);

    std::cout << "The element 3 slots away from the beginning is:" << element << std::endl;


    return 0;
}