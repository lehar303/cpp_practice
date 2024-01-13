#include<iostream>

int main(){

    int data1[] {1,2,4,5,8,12,13,16,71,92};
    int data[] {1,112,4,5,8,12,13,16,71,92};

    bool sorted = false;
    int array_size = sizeof(data)/sizeof(data[0]);

    for(size_t i{0}; i<array_size; ++i){
        if(data[i] > data[i+1])
        {
            //std::cout << "IF: \n" << data[i] << " " << data[i+1];
            sorted = false;
            break;
        }            
        else
        {
            sorted = true;
            //std::cout << "ELSE: \n" << data[i] << " " << data[i+1];
        }
    }

    
    std::cout << std::boolalpha << sorted << std::endl;

    return 0;
}