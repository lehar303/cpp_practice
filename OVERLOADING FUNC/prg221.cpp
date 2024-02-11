#include<iostream>

double max(double* numbers, size_t count){
    std::cout << "doubles overload called" << std::endl;
    double maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;
}

int max(int* numbers, size_t count){
    std::cout << "int overload called" << std::endl;
    int maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;
}

int main(){

    double  doubles[] {10.0,30.2,12.3};
	int  ints[] {1,2,5,2,8,4};

    auto result = max(doubles,std::size(doubles));
    std::cout << "result : " << result << std::endl;

    return 0;
}