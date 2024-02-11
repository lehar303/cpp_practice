#include<iostream>

class Base{

    public:

    Base() = default;
    Base(int x) : m_x(x){
        ++m_count;
    }

    virtual void print() const{
        std::cout << "data[ x: " << m_x
        << "]";
    }

    static int m_count;

    protected:
    int m_x;

};

int Base::m_count = 0;

class Derived : public Base{

    public:
    Derived() = default;
    Derived(int x,int y): Base(x),m_y(y){
        ++m_count;
    }

    void print() const{
        std::cout << "data[ x: " << m_x
                  << " y:" << m_y
                  << "]";
    }

    static int m_count;

    protected:
    int m_y;
};

int Derived::m_count = 0;

int main(){

    Base b1(10);
    Base b2(20);
    std::cout << "base count : " << Base::m_count << std::endl;
    Derived d1(30,40);
    Derived d2(50,60);
    std::cout << "base count : " << Base::m_count << std::endl;
    std::cout << "derived count : " << Derived::m_count << std::endl;

    Base b1(10);
    Base b2(20);
    Derived d1(30,40);
    Derived d2(50,60);
 
    Base * b_ptr1 = &b1;
    Base * b_ptr2 = &d1;
    b_ptr1->print();
    std::cout << "\n";
    b_ptr2->print();

    return 0;
}