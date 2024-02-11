#include<iostream>

class Dog{
public : 
     Dog() = default;
     Dog(const std::string& name_param, const std::string& breed_param, unsigned int age_param);

     std::string& name(){
        return m_name;
     }
     const std::string& name() const{
        return m_name;
     }


     std::string& breed(){
        return m_breed;
     }
     const std::string& breed() const{
        return m_breed;
    }


     unsigned int& age(){
        return m_age;
     }
     const unsigned int& age() const{
        return m_age;
     }

    void print_info() const;

    //const std::string& compile_dog_info()const;

    private : 
        std::string m_name;
        std::string m_breed;
        unsigned int m_age;
};

Dog::Dog(const std::string& name_param, const std::string& breed_param, unsigned int age_param){
         m_name = name_param;
         m_breed = breed_param;
         m_age = age_param;
     }

void Dog::print_info() const {
         std::cout << "Dog (" << this << ") : [ name : " << this->m_name  
                << ", breed : " << this->m_breed  
                << ", age : " << this->m_age << "]" << std::endl;
}

/* const std::string& Dog::compile_dog_info()const
{
    std::string info = "Dog name: " + m_name
                     + "Dog breed: " + m_breed
                     + "dog age: " + std::to_string(m_age);

    return info;
} */
    

int main(){

    Dog dog1("Yo","yu",2);
    //const std::string& ref = dog1.compile_dog_info();
    //std::cout << ref << "\n";

}