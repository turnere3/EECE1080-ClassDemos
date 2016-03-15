

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

Rectangle::Rectangle(){
  setRectangle(0, 0);
}

Rectangle::Rectangle(double in_width, double in_length){
  setRectangle(in_width, in_length);
}

void Rectangle::setRectangle(double in_width, double in_length){
  width = in_width;
  length = in_length;
  calculateSurfaceArea();
}

void Rectangle::getRectangle(double &out_width, double &out_length,
                             double &out_surface_area){
  out_width = width;
  out_length = length;
  out_surface_area = surface_area;
}

double Rectangle::getWidth(){
  return width;
}

double Rectangle::getLength(){
  return length;
}

double Rectangle::getSurfaceArea(){
  return surface_area;
}

void Rectangle::displayRectangle(){
  cout << "Rectangle Data: " << endl;
  cout << "\tWidth: " << width << endl;
  cout << "\tLength: " << length << endl;
  cout << "\tSurface Area: " << surface_area << endl << endl;
}

void Rectangle::enterRectangle(void){
  double local_width;
  double local_length;

  cout << "Enter Rectangle Data: " << endl;
  local_width   = getReal("Width: ");
  local_length  = getReal("Length: ");

  setRectangle(local_width, local_length);
}

void Rectangle::calculateSurfaceArea(){
  surface_area = width * length;
}

Rectangle & Rectangle::operator=(const Rectangle& rhs){
  if (this == &rhs) return *this;

  width = rhs.width;
  length = rhs.length;
  surface_area = rhs.surface_area;

  return *this;
}

Rectangle Rectangle::operator+(const Rectangle& rhs){
  double local_width = width + rhs.width;
  double local_length = length + rhs.length;

  return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator-(const Rectangle& rhs){
  double local_width = abs(width - rhs.width);
  double local_length = abs(length - rhs.length);

  return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator+=(const Rectangle& rhs){
  double local_width = this->width + rhs.width;
  double local_length = this->length + rhs.length;

  return Rectangle( local_width, local_length );
}

Rectangle Rectangle::operator-=(const Rectangle& rhs){
  double local_width = abs(this->width - rhs.width);
  double local_length = abs(this->length - rhs.length);

  return Rectangle( local_width, local_length );
}

