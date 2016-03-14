

// This demostrates both classes, operator overloading, 
// and multiple file linking

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// This is from the stanford CS course
#include "simpio.h"
#include "rectangle-final-gen.h"

int main(){
	Rectangle rect1;
	Rectangle rect2(12.,24.);
	Rectangle rect3;
	Rectangle Result;

	rect1.enterRectangle();

	cout << "Rectangle1" << endl;
	rect1.displayRectangle();
	cout << "Rectangle2" << endl;
	rect2.displayRectangle();
	cout << "Rectangle3" << endl;
	rect3.displayRectangle();

	cout << "rect1 + rect2" << endl;
	Result = rect1 + rect2;
	Result.displayRectangle();

	cout << "rect1 - rect2" << endl;
	Result = rect1 - rect2;
	Result.displayRectangle();

	cout << "rect1 += rect2" << endl;
	rect1 += rect2;
	rect1.displayRectangle();

	cout << "rect2 += rect1" << endl;
	rect2 += rect1;
	rect2.displayRectangle();

	cout << "Testing Assignment Operator" << endl;
	cout << "rect2 = rect2" << endl;
	rect2 = rect2;
	rect2.displayRectangle();

	cout << "Testing Assignment Operator" << endl;
	cout << "rect2 = rect3" << endl;
	rect2 = rect3;
	rect2.displayRectangle();


	return 0;
}
