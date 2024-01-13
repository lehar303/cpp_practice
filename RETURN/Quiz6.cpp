#include <iostream>
 
double& multiply(  double& a,   double& b){
    return a*b;
}
int main( ){
 
    auto value1 {10.0};
    auto value2 {20.0};
 
  double result = multiply(value1,value2);
  std::cout << "result : " << result << std::endl;
 
    return 0;
}