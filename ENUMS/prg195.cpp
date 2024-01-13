#include<iostream>

enum class Month: unsigned char{Jan = 1, January = Jan, Feb,Mar,April,May,Jun,July,Aug,Sep,Oct = 200,Nov,Dec};

int main(){

    Month m {Month::Jan};
    Month m1 {Month::Dec};
    std::cout << static_cast<int>(m) << std::endl;
     std::cout << static_cast<int>(m1) << std::endl;

    return 0;
}