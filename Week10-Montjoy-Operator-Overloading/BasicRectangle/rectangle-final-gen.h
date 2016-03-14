

// This demostrates both classes, operator overloading,
// and multiple file linking

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

class Rectangle {
public:
  Rectangle();
  Rectangle(double in_width, double in_length);
  void setRectangle(double in_width, double in_length);
  void getRectangle(double &out_width, double &out_length,
                    double &out_surface_area);
  void displayRectangle(void);
  void enterRectangle(void);
  double getWidth();
  double getLength();
  double getSurfaceArea();
  Rectangle & operator=(const Rectangle& rhs);
  Rectangle operator+(const Rectangle& rhs);
  Rectangle operator-(const Rectangle& rhs);
  Rectangle operator+=(const Rectangle& rhs);
  Rectangle operator-=(const Rectangle& rhs);
private:
  void calculateSurfaceArea();
  double width;
  double length;
  double surface_area;
};

