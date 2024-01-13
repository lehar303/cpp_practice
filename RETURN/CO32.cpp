#include<iostream>

void is_sum_even(int data[], unsigned int size, bool& result){
    int sum{};
    for(size_t i{0}; i<size; ++i){
        sum +=data[i];
    }

    if(sum%2 == 0)
        result = true;
    else
        result = false;
}

int main(){

    int data[]{12,3,4,5,67,89,45};
    bool b;
    is_sum_even(data,std::size(data),b);
    std::cout << b << "\n";


    return 0;
}