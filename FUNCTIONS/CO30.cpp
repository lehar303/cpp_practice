#include<iostream>

int max_subsequence_sum(int sequence[], unsigned int size)
{
    int sum{};
    int max{};
    //int i =0;
    int sub_array[size];
    for(size_t i{0}; i<size; ++i)
    {
        for(size_t j{i}; j<size; ++j){
            sum = 0;

            for(size_t k=i; k<=j; ++k){

                sum += sequence[i + k];
                if(sum > max)
                    max = sum;
            
            }          
                
        }
        
    }
    return max;
}

int main(){

    int data[] {3,-4 ,6,1,1,-2,2,3};
    auto result  = max_subsequence_sum(data,8);
    std::cout << "result : " << result << std::endl;
    return 0;
}