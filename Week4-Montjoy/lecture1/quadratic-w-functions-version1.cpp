// Author: Rob Montjoy
// Source File: quadratic-w-functions.cpp
// Description: Solving a Quadratic Equation using the Quadratic formula
//
// Notes:
//    - Switched to functions

#include <iostream>
#include <cmath>

using namespace std;

// Function Prototypes
double calcDiscriminant(double a, double b, double c);
double calcRealRoot1(double a, double b, double c, double discriminant);
double calcRealRoot2(double a, double b, double c, double discriminant);

void printInfoMessage(){
  cout << "This is the Quadratic Equation Solver" << endl;
  cout << "\tAtypical Quadratic equation is in the following form" << endl;
  cout << "\tax^2 + bx + c = 0" << endl << endl;
  cout << "This solver uses the Quadratic Formula to solve for the roots of a Quadratic equation" << endl;
  cout << endl;
  cout << "Lets solve a Quadratic equation by first entering values for a,b,c" << endl;
}


int main(){
  double a, b, c;
  double discriminant;

  cout << "What is the value of a? ";
  cin >> a;
  cout << "What is the value of b? ";
  cin >> b;
  cout << "What is the value of c? ";
  cin >> c;

  cout << endl;
  cout << "Equation: " << a << "x^2 + " << b << "x + " << c << endl;

  discriminant = calcDiscriminant(a,  b,  c);

  cout << "With a of Discriminant: " << discriminant;
  if(discriminant > 0){

    cout << " the given equation has two roots which are as follows:" << endl;

    cout << "\tReal Root 1: " << calcRealRoot1(a, b,  c, discriminant) << endl;
    cout << "\tReal Root 2: " << calcRealRoot2(a, b,  c, discriminant) << endl;

  }else if(discriminant == 0){

    cout << " the given equation has only one real root which is as follows:"
	 << endl;

    cout << "\tReal Root: " << calcRealRoot1(a, b,  c, discriminant) << endl;

  }else{

    cout << " the given equation has two Complex roots/solutions which " 
	 << "are as follows:" << endl;

    double real_part = -b /(2 * a);
    double imaginary_part = sqrt(-discriminant)/(2 * a);

    cout << "\tComplex Root1: " << real_part << " + " 
				<< imaginary_part << "i" << endl;

    cout << "\tComplex Root2: " << real_part << " - " 
				<< imaginary_part << "i" << endl;
  }

  return 0;
}

double calcDiscriminant(double a, double b, double c){
  return((b * b) - (4 * a * c));
}

double calcRealRoot1(double a, double b, double c, double discriminant){
    return((-b + sqrt(discriminant))/(2 * a));
}

double calcRealRoot2(double a, double b, double c, double discriminant){
    return((-b - sqrt(discriminant))/(2 * a));
}
