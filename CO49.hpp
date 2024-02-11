
class Box{
    public:
        double m_width{1};
        double m_length{1};
        double m_height{1};
    public:
        Box(double w_p, double l_p, double h_p){
            m_height = h_p;
            m_length = l_p;
            m_width = w_p;
        }

        double base_area(){
            return m_length*m_width;
        }

        double volume(){
            return m_height * m_length* m_width;
        }


};