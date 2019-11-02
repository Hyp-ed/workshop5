#include "circle.hpp"
    
const double Circle::pi = 3.14159265;

Circle::Circle(float r):

  r_(r){

};

void Circle::set_circle(float r){
  r_ = r;
};

Circle Circle::get_circle(){
  return *this;
}

float Circle::get_area(){
  float a = pi*r_*r_;
  return a;
}

float Circle::get_circumference(){
  float c = 2*pi*r_;
  return c;
}
