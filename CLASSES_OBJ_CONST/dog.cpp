     #include "dog.h"
     
     Dog::Dog(const std::string& name_param, const std::string& breed_param, unsigned int age_param){
         m_name = name_param;
         m_breed = breed_param;
         m_age = age_param;
     }

    
     //Utility functions
     void Dog::print_info() const {
         std::cout << "Dog (" << this << ") : [ name : " << this->m_name  
                << ", breed : " << this->m_breed  
                << ", age : " << this->m_age << "]" << std::endl;
     }