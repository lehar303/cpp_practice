#include<iostream>
#include <ctime>
int main(){

    std::srand(std::time(0));

    char predictions [] [90] {
        "a lot of kinds running in the backyard!",
        "a lot of empty beer bootles on your work table.",
        "you Partying too much with kids wearing weird clothes.",
        "you running away from something really scary",
        "clouds gathering in the sky and an army standing ready for war",
        "dogs running around in a deserted empty city",
        "a lot of cars stuck in a terrible traffic jam",
        "you sitting in the dark typing lots of lines of code on your dirty computer",
        "you yelling at your boss. And oh no! You get fired!",
        "you laughing your lungs out. I've never seen this before." ,
        "Uhm , I don't see anything!"
        
    };

    bool end {false};
    const int max_length{15};
    char name[max_length];

    std::cout << "WHat's your name: " << std::endl;
    std::cin.getline(name,max_length);

    while(!end){
        std::cout << "Oh dear " << name << ", I see";
        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions)));

        std::cout << predictions[rand_num] << std::endl;
        
        /* switch(rand_num){
            case 0: std::cout << prediction0 << std::endl;
                    break;
            case 1: std::cout << prediction1 << std::endl;
                    break;
            case 2: std::cout << prediction2 << std::endl;
                    break;  
            case 3: std::cout << prediction3 << std::endl;
                    break;  
            case 4: std::cout << prediction4 << std::endl;
                    break;
            case 5: std::cout << prediction5 << std::endl;
                    break;
            case 6: std::cout << prediction6 << std::endl;
                    break;
            case 7: std::cout << prediction7 << std::endl;
                    break;
            case 8: std::cout << prediction8 << std::endl;
                    break;
            case 9: std::cout << prediction9 << std::endl;
                    break;
            default: std::cout << "I don't see anything" << std::endl;
        } */

        char go_on;
        std::cout << "Do you want to continue? (Y | N): ";
        std::cin >> go_on;

        end = (go_on == 'Y' || go_on == 'y') ? false:true;
    }

    std::cout << "Best Wishes!" << std::endl;

    return 0;
}