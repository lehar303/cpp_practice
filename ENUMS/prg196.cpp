#include<iostream>

enum class Month {Jan = 1, January = Jan, Feb,Mar,April,May,Jun,July,Aug,Sep,Oct,Nov,Dec};

std::string_view month_to_string(Month month){
    switch(month){
        using enum Month;
        case Jan: return "January";
        default: return "None";
    }
    
}

int main(){

    Month month(Month::Jan);
    std::cout << month_to_string(month) << std::endl;

    return 0;
}