#include "circle.hpp"
    
const double Circle::pi = 3.14159265;

Circle::Circle(float radius):
  radius_(radius)
{};

void Circle::set_circle(float radius) {
  radius_ = radius;
};

Circle Circle::get_circle() {
  return *this;
}

float Circle::get_area() {
  float a = pi*radius_*radius_;
  return a;
}

float Circle::get_circumference() {
  float c = 2*pi*radius_;
  return c;
}
