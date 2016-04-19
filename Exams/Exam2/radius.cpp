#include <iostream>

using namespace std;

class Circle{
  public:
   Circle(){
     double radius = 5;
   }

   void setRadius(double radius_temp){
     radius = radius_temp;
   }

   double getRadius() const{
     return radius;
   }

   double radius;
};


int main(){
   Circle bob;

   cout << bob.getRadius() << ',';
   bob.setRadius(10);
   cout << bob.getRadius() << ',';
   bob.radius = 20;
   cout << bob.getRadius() << ',';
   cout << bob.radius;

   return 0;
}

