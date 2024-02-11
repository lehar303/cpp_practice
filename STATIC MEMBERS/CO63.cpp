#include<iostream>

class CoolUtility{

    public:
        //CoolUtility(const char* input): m_object_description(new char(*(input)))
        //{}

        CoolUtility(const char* input): m_object_description(input){}


        void what_do_you_do() const;

    
        static const char* s_general_description;
        private:
        const char* m_object_description;

};

void CoolUtility::what_do_you_do() const{
    std::cout <<  m_object_description << "\n";
}

const char* CoolUtility::s_general_description{"Cool utility to move us all to Mars"};

int main(){    

    CoolUtility cu("I can take you from point A to point #");
    cu.what_do_you_do();
    std::cout << std::endl;
    std::cout << "general purpose : " << CoolUtility::s_general_description << std::endl;

    return 0;
}