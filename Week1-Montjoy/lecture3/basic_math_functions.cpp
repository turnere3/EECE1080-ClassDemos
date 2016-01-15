// Author: Rob Montjoy
// Source File: basic_math_functions.cpp
// Description: This program demostrates most of the basic math functions
//

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	cout << "Power: 7 ^ 3 = " << pow (7.0, 3.0) << endl;
	cout << "Natural Log of 5.5 = " << log(5.5) << endl;
	
	cout << "Square Root of 10 = " << sqrt(10.0) << endl;
	
	cout << "The exponential value of 9 is " << exp(9.0) << endl;
	
	cout << "abs (3.1416) = " << abs (3.1416) << endl;
	
  	cout << "abs (-10.6)  = " << abs (-10.6) << endl << endl;
  
	cout << "Rounding numbers up (ceil): " << endl;
	cout << "\tCeil of 2.3 is " <<  ceil(2.3) << endl;
  	cout << "\tCeil of 3.8 is " <<  ceil(3.8) << endl;
  	cout << "\tCeil of -2.3 is " <<  ceil(-2.3) << endl;
  	cout << "\tCeil of -3.8 is " <<  ceil(-3.8) << endl; 
	cout << endl;
	
	cout << "Rounding numbers down (floor): " << endl;
	cout << "\tFloor of 2.3 is " <<  floor(2.3) << endl;
  	cout << "\tFloor of 3.8 is " <<  floor(3.8) << endl;
  	cout << "\tFloor of -2.3 is " <<  floor(-2.3) << endl;
  	cout << "\tFloor of -3.8 is " <<  floor(-3.8) << endl;
	cout << endl;

	cout << "Trigonometric Functions: All functions need angles in radians" 
      	     << endl;
	double Angle, Angle_in_Radians;
	cout << "Please enter the Angle in Degrees: ";
	cin >> Angle;

	Angle_in_Radians = M_PI/180.0*Angle;
	cout << "\tAngle:   " << Angle << " Degrees"      	<< endl;
	cout << "\tAngle:   " << Angle_in_Radians << " radians" << endl;
	cout << "\tSine:    " << sin(Angle_in_Radians) 		<< endl;
	cout << "\tCosine:  " << cos(Angle_in_Radians) 		<< endl;
	cout << "\tTangent: " << tan(Angle_in_Radians) 		<< endl;
	cout << endl;
	
	cout << "Inverse Trigonometric Functions" << endl;
	double 	param = 0.5;
  	double result = asin (param) * 180.0 / M_PI;
  	cout << "The arc sine of " << param << " is " 
       	     << result << " degrees" << endl;
       
  	param = 0.5;
  	result = acos (param) * 180.0 / M_PI;
  	cout << "The arc cosine of " << param << " is " 
       		<< result << " degrees" << endl;
       
  	param = 1.0;
  	result = atan (param) * 180 / M_PI;
  	cout << "The arc tangent of " << param << " is " 
       		<< result << " degrees" << endl;
       
	cout << "Note: The arc tangent of 1 X 4 is PI: " 
      << atan(1.0)*4 << endl;

	return 0;
}

