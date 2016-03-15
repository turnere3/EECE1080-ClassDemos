

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
  void GetRectangle(double &out_width, double &out_length);
  void PrintRectangle(void);
  void EnterRectangle(void);
private:
  double width;
  double length;
};


int main(){
  Rectangle rect1;
  Rectangle rect2(12.,24.);
  Rectangle rect3;

  rect1.EnterRectangle();

  rect1.PrintRectangle();
  rect2.PrintRectangle();
  rect3.PrintRectangle();

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

void Rectangle::EnterRectangle(void){
  double local_width;
  double local_length;

  cout << "Enter Rectangle Data: " << endl;
  local_width   = getReal("Width: ");
  local_length  = getReal("Length: ");

  SetRectangle(local_width, local_length);
}

