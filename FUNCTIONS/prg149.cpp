#include<iostream>

unsigned int digit_sum(unsigned int num)
{
    unsigned int sum = 0;
    unsigned int remainder;
    while(num!=0){
        remainder  = num % 10;
        sum = sum + remainder;
        num = num/10;
    }

    return sum;
}

int main(){

    std::cout << digit_sum(62727289 ) << std::endl;

    return 0;
}