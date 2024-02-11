#include<iostream>

struct Point{
    double x;
    double y;
};

void print( const Point& p){
    std::cout << p.x << "," << p.y << std::endl;
}

int main(){

    Point p1;
    p1.x = 5;
    p1.y = 6;

    print(p1);

    auto [a,b] = p1;
    std::cout << a << "," << b << "\n";

    p1.x = 7;
    p1.y = 8;
    print(p1);
    std::cout << a << "," << b << "\n";



    return 0;
}