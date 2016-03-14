

// This demostrates both classes, operator overloading, 
// and multiple file linking

// Implementation file

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// This is from the stanford CS course
#include "simpio.h"
#include "rectangle-final-gen.h"

Rectangle::Rectangle() {
	SetRectangle(0, 0);
}

Rectangle::Rectangle(double in_width, double in_length){
	SetRectangle(in_width, in_length);
}

void Rectangle::SetRectangle(double in_width, double in_length){
	width = in_width;
	length = in_length;
	CalculateSurfaceArea();
}

void Rectangle::GetRectangle(double &out_width, double &out_length, 
		double &out_surface_area){
	out_width = width;
	out_length = length;
	out_surface_area = surface_area;
}

void Rectangle::PrintRectangle(){
	cout << "Rectangle Data: " << endl;
	cout << "\tWidth: " << width << endl;
	cout << "\tLength: " << length << endl;
	cout << "\tSurface Area: " << surface_area << endl << endl;
}

void Rectangle::EnterRectangle(void){
	double local_width;
	double local_length;

	cout << "Enter Rectangle Data: " << endl;
	local_width 	= getReal("Width: ");
	local_length 	= getReal("Length: ");

	SetRectangle(local_width, local_length);
}

void Rectangle::CalculateSurfaceArea(){
	surface_area = width * length;
}

Rectangle Rectangle::operator=(const Rectangle&  rhs){
    if (this == &rhs)
	return *this;

    return Rectangle( rhs.width, rhs.length );
}

Rectangle Rectangle::operator+(const Rectangle&  rhs){
    double local_width = width + rhs.width;
    double local_length = length + rhs.length;

    return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator-(const Rectangle&  rhs){
    double local_width = abs(width - rhs.width);
    double local_length = abs(length - rhs.length);

    return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator+=(const Rectangle&  rhs){
    double local_width = this->width + rhs.width;
    double local_length = this->length + rhs.length;

    return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator-=(const Rectangle&  rhs){
    double local_width = abs(this->width - rhs.width);
    double local_length = abs(this->length - rhs.length);

    return Rectangle( local_width, local_length );
}

