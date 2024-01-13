#include<iostream>

typedef unsigned long long int ulli;

bool is_pallindrome(ulli num)
{
    ulli new_num = 0;
    ulli copy = num;
    int remainder;
     while(num!=0){
        remainder = num % 10;
        new_num = (new_num*10) + remainder;
        num = num/10;
     }
    std::cout << new_num << std::endl;
     if(new_num == copy)
        return true;
    else
        return false;
}

int main(){

    std::cout << is_pallindrome(1221) << std::endl;

    return 0;
}