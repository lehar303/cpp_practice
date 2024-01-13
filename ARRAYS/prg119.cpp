#include<iostream>

int main(){

     const size_t name_length{15};
	/*
    char members [][name_length] {
        {'J','o','h','n'},
        {'S','a','m','u','e','l',},
        {'R','a','s','h','i','d'},
        {'R','o','d','r','i','g','e','z'}
    };

    for(size_t i{0}; i<std::size(members); ++i)
    {
        std::cout << members[i] << std::endl;
    } */

    char members1 [][name_length] {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };

    for(size_t i{0}; i<std::size(members1); ++i)
    {
        std::cout << members1[i] << std::endl;
    }

    return 0;
}