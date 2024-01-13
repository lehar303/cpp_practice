#include<iostream>
#include<optional>

std::optional<size_t> find_character_v2(const std::string & str, char c){
    //If found set the return index, else return an empty std::optional
    for (size_t i{} ; i < str.size()  ; ++i){
        if(str.c_str()[i] == c){
            return i;
        }
    }
   return {}; //Or std::nullopt
   //std::nullopt;
}

int main(){

    std::string str1 {"Hello World in C++20!"};
	char c{'C'};

    
    std::optional<size_t> result = find_character_v2(str1,c);

    if(result.has_value()){
        std::cout << "Found our character at index : " << result.value() << std::endl;
    }else{
        std::cout << "Didn't find our character" << std::endl;
    }

    return 0;
}