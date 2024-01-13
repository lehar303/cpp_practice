#include<iostream>

int main(){

    int data[] {11,2,52,53,9,13,5,7,12,11};
    int element;
    int input;
    int *min_address;

    min_address = data;
    for(size_t i{0}; i< std::size(data); ++i)
    {
        if(*min_address > *(data + i))
            min_address = (data + i); 
    }

    std::cout << min_address << " " << *min_address << std::endl;
    return 0;
}