#include<iostream>

size_t dog_count{0};

unsigned int add_student(){
    static unsigned int count{0};
    dog_count++;

    count++;
    return count;
}

void do_something(){
    //--count; 
    ++dog_count;
}

int main(){

    //add_student();
    std::cout << add_student() << "\n";
    std::cout << add_student() << "\n";
    std::cout << add_student() << "\n";

    return 0;
}