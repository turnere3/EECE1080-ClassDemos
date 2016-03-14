

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

	rect1.EnterRectangle();

	rect1.PrintRectangle();
	rect2.PrintRectangle();
	rect3.PrintRectangle();

	Result = rect1 + rect2;
	Result.PrintRectangle();

	Result = rect1 - rect2;
	Result.PrintRectangle();

	rect1 += rect2;
	rect1.PrintRectangle();

	rect2 += rect1;
	rect2.PrintRectangle();

	rect2 = rect2;
	rect2.PrintRectangle();

	rect2 = rect3;
	rect2.PrintRectangle();

	return 0;
}
