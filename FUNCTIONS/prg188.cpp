#include<iostream>

void sum(int *p1, int *p2){

    std::cout << *p1 + *p2 << std::endl;
}

int main(){

    int a = 1;
    int b = 2;

    double c = 5.0;
    double d = 8.9;

    sum(&a,&b);
    //sum(&c,&d);

    return 0;
}