#include<iostream>
#include<cmath>

class Point{
    public:
        double m_x{1};
        double m_y{1};
    
    public:
        Point(double x_p, double y_p){
            m_x = x_p;
            m_y = y_p;
        }

        double distance_to(Point p){
            return sqrt(pow((p.m_x - m_x),2) + pow((p.m_y - m_y),2));
        }
};

int main(){

   /* Point p1;
    Point p2;
    p2.m_x = 2;
    p2.m_y = 2;
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;*/

    Point p1(1.1,2.1);
    Point p2(3.2,5.2);
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;

    return 0;
}