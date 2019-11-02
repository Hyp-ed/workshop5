#pragma once
#include <iostream>
	class Rectangle
	{
	private:
		float length_, width_;
		float area(float x, float y);
		float perimeter(float x, float y);
	public:
		Rectangle(float x, float y) {
			length_ = x;
			width_ = y;

		}
		float get_length();
		float get_width();
		float get_area();
		float get_perimeter();
		void print();
	};