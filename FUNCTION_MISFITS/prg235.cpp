#include<iostream>

inline int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int main(){

    int a = 6;
    int b = 7;

    std::cout<< max(a,b) << "\n";

    return 0;
}