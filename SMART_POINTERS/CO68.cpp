#include<iostream>
#include<memory>

struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
    double m_x{};
    double m_y{};
};

class Line{
    public : 
    //Line(Point * start, Point * end)
       // : m_start(start), m_end(end){}

    Line(std::unique_ptr<Point> start, std::unique_ptr<Point> end)
        :m_start(start.get()), m_end(end.get()){}

    /*~Line() {
        delete m_start;
        delete m_end;
     }*/
 
    double start_x() const{
        return m_start->m_x;
    }
    double start_y() const{
        return m_start->m_y;
    }
 
    double end_x() const{
        return m_end->m_x;
    }
    double end_y() const{
        return m_end->m_y;
    }
 
    private : 
    Point * m_start{};
    Point * m_end{};
};

int main(){

    std::unique_ptr<Point> p1 = std::make_unique<Point>(1,1);
    std::unique_ptr<Point> p2 = std::make_unique<Point>(2,2);
    Line l1(std::move(p1),std::move(p2));

    return 0;
}