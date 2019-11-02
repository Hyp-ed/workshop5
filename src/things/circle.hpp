#include <iostream>

class Circle{
  
  public:
    
    Circle(float r);

    void set_circle(float r);
    
    Circle get_circle();
    
    float get_area();

    float get_circumference();

  private:

    Circle(): r_(0){};

    static const double pi;
    float r_;

};
