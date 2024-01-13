#include<iostream>

void print_sum(int a,int b){

    int sum = a+b;
    std::cout << sum << std::endl;
}

int main(){

    print_sum(3.7,5.4);

    return 0;
}