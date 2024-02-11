#include <iostream>

class Person
{
private : 
	std::string last_name{};
   std::string first_name{};
	 int * age{};
public:
	//Constructors
    Person() = default;
    Person(const std::string& last_name_param,const std::string& first_name_param, int age_param);
    Person(const std::string& last_name_parm,const std::string& first_name_param);
    Person(const std::string& last_name);  

    //Copy Ctr
   // Person(const Person src); 

   Person(const Person& src);
    
    ~Person();
	
	//Setters 
	void set_first_name(const std::string& first_name) {this->first_name = first_name;}
	void set_last_name(const std::string& last_name) {this->last_name = last_name;}
	void set_age(int age) {*(this->age) = age;} // Remember to dereference
	
	//Getters
	const std::string& get_first_name() const {return first_name;}
	const std::string& get_last_name() const {return last_name;}
	int* get_age() const{ return age;};

	//Utilities
	void print_info(){
		std::cout << "Person object at : " << this 
			<<" [ Last_name : " << last_name 
			<< ", First_name :  " << first_name 
			<< " ,age : " << *age 
			<< " , age address : " << age 
			<< " ]" << std::endl;
	}
};

Person::~Person()
{
	delete age; // Make sure that you are not leaking memory
}

Person::Person(const std::string& last_name)
	: Person(last_name,"")
{
}

Person::Person( const std::string& last_name_param, const std::string& first_name_param)
	: Person(last_name_param,first_name_param,0)
{
}

Person::Person( const std::string& last_name_param,  const std::string& first_name_param, int age_param)
	: 	last_name(last_name_param),
		first_name(first_name_param),
		age(new int(age_param))
{
}

/*Person::Person(const Person src)
{

}*/

/*Person::Person(const Person& src)
    :last_name(src.get_last_name()),
    first_name(src.get_first_name()),
    age(src.get_age())
{

}*/

/*Person::Person(const Person& src)
    :last_name(src.get_last_name()),
    first_name(src.get_first_name()),
    age(new int(*(src.get_age())))
{

}*/

Person::Person(const Person& src)
    :Person(src.get_last_name(),src.get_last_name(),*(src.get_age()))
{
    std::cout << "Copy ctr called " << "\n";
}

int main(){

   /* Person p1{"John", "Snow", 25};
    p1.print_info();

    Person p2(p1);
    p2.print_info();

    p1.set_age(30);
    p1.print_info();
    p2.print_info();
*/
    Person p1{"John", "Snow", 25};
    Person p2{"vf", "Snfdfow", 25};
    Person p3{"Jovfgvhn", "Srfgfnow", 25};

    Person p_array[] {p1,p2,p3};

    for(Person& p: p_array){
        p.print_info();
    }

    

    return 0;
}

