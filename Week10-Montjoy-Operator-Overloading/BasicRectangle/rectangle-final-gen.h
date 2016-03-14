

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
		void GetRectangle(double &out_width, double &out_length,
			double &out_surface_area);
		void PrintRectangle(void);
		void EnterRectangle(void);
		Rectangle operator=(const Rectangle& rhs);
		Rectangle operator+(const Rectangle& rhs);
		Rectangle operator-(const Rectangle& rhs);
		Rectangle operator+=(const Rectangle& rhs);
		Rectangle operator-=(const Rectangle& rhs);

	private:
		void CalculateSurfaceArea();
		double width;
		double length;
		double surface_area;
};

