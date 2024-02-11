#include <iostream>
#include <cstring>


void find_matches(std::string data[] , unsigned int size, const char* key){

    std::string * matches = new std::string [size]; // Create std::string array on the heap. Remember to release
    //Don't modify anything above this line
    //Your code should go below this line
    
    int count{};
    //auto n_found{};
    for(unsigned int i = 0; i < size; ++i){
        auto n_found = data[i].find(key); 
        if(n_found == std::string::npos)
            continue;
        else{
            matches[count] = data[i];
            count++; 
        }

                        
    }
    
    std::cout << "Found " << count << " matches. They are: ";
    
    for(unsigned int i = 0; i < count; ++i){
        std::cout << data[i];
    }
    
    
    //Your code should go above this line
    //Don't modify anything below this line
    

    delete[] matches; // Remember to release the memory.
   
}


int main(){

    std::string data[] {"catching","iteration","fresh","iterative","outside","mercy"};

    find_matches(data,6,"iter");

    return 0;
}