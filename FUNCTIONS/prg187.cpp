#include<iostream>

void inc(int& val);
void print(const int& val);

int main(){

    int a = 5;
    double d = 69.42;

    inc(a);
    print(a);

    print(d);

    int di = d;
    //inc(static_cast<int>(d));
    inc(di);



    return 0;
}

void inc(int& val){
    ++val;
    std::cout << val << std::endl;
}

void print(const int& val){
    std::cout << val << std::endl;
}