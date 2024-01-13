#include<iostream>

typedef unsigned long long int  ulli;

void odd(ulli num){
    int remainder;

    while(num!=0){
        remainder = num % 10;
        if((remainder % 2) != 0)
       // {
            std::cout << remainder;
          //  std::cout << "WTF";
       // }
       // else{
       //     std::cout << "More WTF";
       // }
        num = num/10;
    }
}

int main(){

    odd(98723713);

    return 0;
}