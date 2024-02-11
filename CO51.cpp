#include<iostream>
#include<cmath>

class Point{
    private:
        double m_x{1};
        double m_y{1};
    
    public:
        Point() = default;

        Point(double x_p, double y_p){
            m_x = x_p;
            m_y = y_p;
        }

        double distance_to(Point p){
            return sqrt(pow((p.m_x - m_x),2) + pow((p.m_y - m_y),2));
        }

        void print_point( Point& p){
            	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
        }

        double x(){
            return m_x;
        }

        double y(){
            return m_y;
        }

        Point* set_x(double x){
            m_x = x;
            return this;
        }

         Point* set_y(double y){
            m_y = y;
            return this;
        }

        /*Point& set_x(double x){
            m_x = x;
            return *this;
        }

         Point& set_y(double y){
            m_y = y;
            return *this;
        }*/
};

int main(){

   /* Point p1;
    Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;*/

    /*Point p1(1.1,2.1);
    Point p2(3.2,5.2);
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;*/

    Point p1(1.1,2.2);
    p1.print_point(p1);
    Point* p_ptr {&p1};
    p_ptr->set_x(21.2)->set_y(4.2);
    p1.print_point(p1);

    /*Point p1;
    p1.set_x(21.2).set_y(4.2);
    p1.print_point(p1);*/

    return 0;
}