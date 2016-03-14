

// This demostrates both classes, operator overloading, 
// and multiple file linking

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

// This is from the stanford CS course
#include "simpio.h"

using namespace std;

class Rectangle
{
	public:
		Rectangle();
		Rectangle(double in_width, double in_length);
		void SetRectangle(double in_width, double in_length);
		void GetRectangle(double &out_width, double &out_length,
			double &out_surface_area);
		void PrintRectangle(void);
		void EnterRectangle(void);

	private:
		void CalculateSurfaceArea();
		double width;
		double length;
		double surface_area;
};


int main()
{
	Rectangle rect1;
	Rectangle rect2(12.,24.);
	Rectangle rect3;

	rect1.EnterRectangle();

	rect1.PrintRectangle();
	rect1.CalculateSurfaceArea();
	rect2.PrintRectangle();
	rect3.PrintRectangle();

	return 0;
}

Rectangle::Rectangle()
{
	SetRectangle(0, 0);
}

Rectangle::Rectangle(double in_width, double in_length)
{
	SetRectangle(in_width, in_length);
}

void Rectangle::SetRectangle(double in_width, double in_length)
{
	width = in_width;
	length = in_length;
	CalculateSurfaceArea();
}

void Rectangle::GetRectangle(double &out_width, double &out_length, 
		double &out_surface_area)
{
	out_width = width;
	out_length = length;
	out_surface_area = surface_area;
}

void Rectangle::PrintRectangle()
{
	cout << "Rectangle Data: " << endl;
	cout << "\tWidth: " << width << endl;
	cout << "\tLength: " << length << endl;
	cout << "\tSurface Area: " << surface_area << endl << endl;
}

void Rectangle::EnterRectangle(void)
{
	double local_width;
	double local_length;

	cout << "Enter Rectangle Data: " << endl;
	local_width 	= getReal("Width: ");
	local_length 	= getReal("Length: ");

	SetRectangle(local_width, local_length);
}

void Rectangle::CalculateSurfaceArea()
{
	surface_area = width * length;
}

