 #include<iostream>

 double sum(const double (&scores)[10]);

 int main(){

    double arr[]{10.0,11,0,23.6,78.9,55.6,22.5,11.1,90,54.8};
    double result = sum(arr);

    std::cout << result << std::endl;

    return 0;
 }

 double sum(const double (&scores)[10]){

    double sum{};

    for(size_t i{0}; i< std::size(scores); ++i){
        sum +=scores[i];
    }

    return sum;

 }