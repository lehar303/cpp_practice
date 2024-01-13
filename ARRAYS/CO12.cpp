#include<iostream>

int main()
{
    int vowel_count = 0;
    char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};

    for(auto element: message){
        if(element == 'A' || element == 'E'|| element == 'I' ||element == 'O' ||element == 'U' ||element == 'a' ||element == 'e' ||element == 'i' ||element == 'o' ||element == 'u' )
        {
            ++vowel_count;
        }
    }

    std::cout << vowel_count << std::endl;

    return 0;
}