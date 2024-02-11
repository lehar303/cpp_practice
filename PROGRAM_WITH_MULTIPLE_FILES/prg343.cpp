#include<iostream>

extern const double d = 89;
extern const double d1;
void dfunc();
int age = 1;

int main(){

    std::cout << d1 << "\n";
    dfunc();

    return 0;
}