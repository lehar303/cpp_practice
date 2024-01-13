#include<iostream>
#include<cstring>

int main(int argc, char **argv){

    if(argc !=4){
        std::cerr << "WRONG" << std::endl;
        std::cerr << "Program name a+ b" << std::endl;
        std::cerr << "You have entered" ;
            for(size_t i = 0; i< argc; ++i){
                std::cout << argv[i] ;
            }
        std::cout << std::endl;
        return 0;    
    }

    double first_number = atof(argv[1]);
    double second_number = atof(argv[3]);
    char c;

    char *operation = argv[2];
    if((std::strlen(operation) == 1) && 
        ((*operation == '+') ||
         (*operation == '-') ||
         (*operation == 'x') ||
         (*operation == '/')))
         {
            c = *operation;
         }


    //double first_number {5.0};
    //double second_number {33.1};
    //char c{'+'};
    
    switch(c){
        case '+':
        std::cout << first_number << " + " << second_number << " = " 
                << first_number + second_number << std::endl;
        break;
        
        case '-':
        std::cout << first_number << " - " << second_number << "=" 
                << first_number - second_number << std::endl;
        break;
        
        case 'x':
        std::cout << first_number << " * " << second_number << " = " 
                << first_number * second_number << std::endl;
        break;
        
        case '/':
        std::cout << first_number << " / " << second_number << " = " 
                << first_number / second_number << std::endl;
        break;
    }

    return 0;
}