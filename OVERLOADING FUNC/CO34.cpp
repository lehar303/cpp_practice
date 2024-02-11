#include<iostream>

double add(double a, double b);

std::string add( std::string& a,std::string& b);

const char* add( char* a, const char* b);

int main(){

    return 0;
}

double add(double a, double b){
    double result;
    return result = a+ b;
}

std::string add( std::string& a,std::string& b){
    std::string result;
    return result = a + b;
}

const char* add( char* a, const char* b){
    //return a = &(*a + *b);
}