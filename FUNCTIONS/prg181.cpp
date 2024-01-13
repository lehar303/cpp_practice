#include<iostream>

//double sum(double scores[], size_t count){
double sum(double* scores, size_t count){
    double score_sum = 0;

    for(size_t i{0}; i<count; ++i){
        score_sum +=scores[i];
    }
    
    return score_sum;
}

int main(){

    double my_scores[]{10.5,34.3};
    double result = sum(my_scores,std::size(my_scores));
    std::cout << result << std::endl;

    return 0;
}