
// This demostrates both classes, operator overloading, 
// and multiple file linking

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class Rectangle{
	public:
		Rectangle();
		Rectangle(double in_width, double in_length);
		void SetRectangle(double in_width, double in_length);
		void GetRectangle(double &out_width, double &out_length);
		void PrintRectangle(void);

	private:
		double width;
		double length;
};

int main(){
	Rectangle rect1;
	Rectangle rect2(12.,24.);
	Rectangle Result;

	double width_from_class = 0;
	double length_from_class = 0;

	cout << width_from_class << endl;
	cout << length_from_class << endl;

	rect2.GetRectangle(width_from_class, length_from_class);
	cout << width_from_class << endl;
	cout << length_from_class << endl;


	rect1.PrintRectangle();
	rect2.PrintRectangle();

	return 0;
}

Rectangle::Rectangle(){
	SetRectangle(0, 0);
}

Rectangle::Rectangle(double in_width, double in_length){
	SetRectangle(in_width, in_length);
}

void Rectangle::SetRectangle(double in_width, double in_length){
	width = in_width;
	length = in_length;
}

void Rectangle::GetRectangle(double &out_width, double &out_length){
	out_width = width;
	out_length = length;
}

void Rectangle::PrintRectangle(){
	cout << "Rectangle Data: " << endl;
	cout << "\tWidth: " << width << endl;
	cout << "\tLength: " << length << endl << endl;
}
