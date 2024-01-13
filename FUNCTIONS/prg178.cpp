#include<iostream>

void age_1(int& age);

int main(){

    int age = 23;
    std::cout << "Age: " << age << &age << std::endl;
    age_1(age);
    std::cout << "Age: after call: " << age << &age << std::endl;
    return 0;
}

void age_1(int& age)
{
    ++age;
    std::cout << "Age: (inside func)" << age  << &age << std::endl;
}