#ifndef C_H
#define C_H

#include <iostream>
#include <math.h>

using namespace std;

class Color{
public:
	Color(){
		red = 100;
		green = 100;
		blue = 100;
	}
	
	Color(double red, double green, double blue){
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	
	
	void printRGB(){
		cout << "R: " << red << " G: " << green << " B: " << blue << endl;
	}
	
	void getCMYK(double& c, double& m, double& y, double& k){
		k = max(max(red, green), blue);
		c = (100-red-k)/k;
		m = (100-green-k)/k;
		y = (100-blue-k)/k;
	}
	

	double red;
	double green;
	double blue;
};

Color operator+(const Color& a, const Color& b){
	Color ret;
	ret.red = a.red + b.red;
	ret.green = a.green + b.green;
	ret.blue = a.blue + b.blue;
	ret.red = min(ret.red, 100.0);
	ret.green = min(ret.green, 100.0);
	ret.blue = min(ret.blue, 100.0);
	return ret;
}

#endif