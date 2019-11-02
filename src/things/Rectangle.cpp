#include <iostream>
#include "Rectangle.h"
using namespace std;
float Rectangle::get_length()
{
	return length_;
}
float Rectangle::get_width()
{
	return width_;
}
float Rectangle::area(float x, float y)
{
	return x * y;
}
float Rectangle::perimeter(float x, float y)
{
	return 2 * (x + y);
}
float Rectangle::get_area()
{
	return Rectangle::area(width_, length_);
}
float Rectangle::get_perimeter()
{
	return Rectangle::perimeter(width_, length_);
}
void Rectangle::print()
{
	cout << get_length() << " ";
	cout << get_width() << " ";
	cout << get_perimeter() << " ";
	cout << get_area() << '\n';
}