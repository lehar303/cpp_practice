#include<iostream>

auto& max(int& a,int&b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main(){

    int x = 10;
    int y = 45;
    int& result = max(x,y);
    //int result = max(x,y);
    ++result;

    std::cout << result << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";


    return 0;
}