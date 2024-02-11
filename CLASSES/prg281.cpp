#include<iostream>

class Dog{
    public : 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int  age_param);
        ~Dog();

        void print_info(){
            std::cout << "Dog (" << this << ") : [ name : " << name 
                << " breed : " << breed << " age : " << *p_age << "]" << std::endl;
        }

        Dog* set_dog_name(std::string name){
            this->name = name;
            std::cout << this << "\n";
            return this;
        }

        Dog* set_dog_breed(std::string breed){
            this->breed = breed;
            std::cout << this << "\n";
            return this;
        }

        Dog* set_dog_age(int age){
            *(this->p_age) = age;
            std::cout << this << "\n";
            return this;
        } 

        /*Dog& set_dog_name(std::string name){
            this->name = name;
            std::cout << this << "\n";
            return *this;
        }

        Dog& set_dog_breed(std::string breed){
            this->breed = breed;
            std::cout << this << "\n";
            return *this;
        }

        Dog& set_dog_age(int age){
            *(this->p_age) = age;
            std::cout << this << "\n";
            return *this;
        }*/



        private : 
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
    }

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for " << name << " at " << this <<  std::endl;
}

int main(){
    Dog dog1("Fluffly","Shepard",2);
    dog1.print_info();

    /*dog1.set_dog_name("Yo");
    dog1.set_dog_breed("Dal");
    dog1.set_dog_age(5);*/

    dog1.set_dog_name("gygy")->set_dog_breed("hj")->set_dog_age(8);

    /*dog1.set_dog_name("dff").set_dog_breed("dsfd").set_dog_age(7);*/

    dog1.print_info();

    std::cout << "Done" << "\n";

    return 0;
}