#include <iostream>
#include <cmath>

using namespace std;

struct point_t{
  double x_coord, y_coord;
};

class Point{
  public:
    Point();
    void set_point_data (double, double);      
    double distance(Point);    
  private:
    point_t pt;
};

Point::Point(){
  pt.x_coord = 0.0;
  pt.y_coord = 0.0;
}

void Point::set_point_data(double x, double y){
  pt.x_coord = x;
  pt.y_coord = y;
}

double Point::distance(Point other){
  // This is sqrt(x^2 + y^2)
  return sqrt((pt.x_coord - other.pt.x_coord)*(pt.x_coord - other.pt.x_coord) 
       + (pt.y_coord - other.pt.y_coord)*(pt.y_coord - other.pt.y_coord));
}

int main(){
     Point point1, point2;
     point1.set_point_data (2.0, -3.0);
     point2.set_point_data (5.0, 1.0);
     cout << point1.distance(point1) << ',';
     cout << point1.distance(point2);
     return 0;
}

