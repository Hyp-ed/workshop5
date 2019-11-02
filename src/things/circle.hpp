#include <iostream>

class Circle{
  
  public:
    
    Circle(float radius);

    void set_circle(float radius);
    
    Circle get_circle();
    
    float get_area();

    float get_circumference();

  private:

    Circle(): radius_(0){};

    static const double pi;
    float radius_;

};
