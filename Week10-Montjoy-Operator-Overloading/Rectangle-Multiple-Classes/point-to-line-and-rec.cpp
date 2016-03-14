// Point, Line and Rectangle Classes

#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;
using std::showpoint;

class Point
{
	public:
		Point(int = 0 , int = 0 );
		void SetPoint(int X, int Y) { SetY(Y); SetX(X); }
		int GetX() { return x; };
		int GetY() { return y; };
		void SetX(int X) {  x  = X; }
		void SetY(int Y) { y = Y ; }
		void PrintPoint() { cout << x << "," << y << endl;}
	private:
		int x;
		int y;
};

Point::Point(int X, int Y)
{
	SetPoint(X, Y);
}

class Line
{
	public:
		Line(int = 0 , int = 0 , int = 0 , int = 0 );
		void SetLine(int, int, int,int);
		int GetX1();
		int GetY1();
		int GetX2();
		int GetY2();
		void PrintLine() { cout << "LINE: ";   
				   Begin.PrintPoint();
				   cout << " to" ;
				   End.PrintPoint() ;
				   cout << endl;
			}
	private:
		Point Begin;
		Point End;
};


Line::Line(int x1, int y1, int x2, int y2)
{
	SetLine(x1,y1,x2,y2);
}

void Line::SetLine(int x1,int y1, int x2, int y2)
{
	Begin.SetX(x1);
	Begin.SetY(y1);
	End.SetX(x2);
	End.SetY(y2);
}

int Line::GetX1()
{
	return Begin.GetX();
}

int Line::GetY1()
{
	return Begin.GetY();
}

int Line::GetX2()
{
	return End.GetX();
}

int Line::GetY2()
{
	return End.GetY();
}


class Rectangle
{
	public:
		Rectangle(int = 0 , int = 0 , int = 0 , int = 0 ,
			  int = 0,  int = 0, int = 0 , int = 0);
                void SetRectangle(int, int, int,int,
				  int, int, int, int);
                int GetHgt()	{ return hgt ;	}
                int GetWidth()  { return width ; }
		bool IsSquare() { if(hgt == width) 
					return true;
				  return false;
				}
                void PrintRectangle() { cout 	<< "Rectangle: Width X Hgt = " 
								<< width 
								<< " X " 
								<< hgt 
					     	<< endl
					     	<< "Corners: " << endl;
						Corner1.PrintPoint();
						Corner2.PrintPoint();
						Corner3.PrintPoint();
						Corner4.PrintPoint();
						cout << endl;
				}
	private:
		Point Corner1;		// Line Line1;
		Point Corner2;		// Line Line2;
		Point Corner3;		// Line Line3;
		Point Corner4;		// Line Line4;
		int width;
		int hgt;
};

Rectangle::Rectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	SetRectangle(x1,y1,x2,y2,x3,y3,x4,y4);
}

void Rectangle::SetRectangle(int x1 , int y1, int x2 ,int y2,
				  int x3 , int y3, int x4, int y4)
{
	Corner1.SetX(x1);
	Corner1.SetY(y1);
	Corner2.SetX(x2);
	Corner2.SetY(y2);
	Corner3.SetX(x3);
	Corner3.SetY(y3);
	Corner4.SetX(x4);
	Corner4.SetY(y4);

	width = abs(Corner3.GetX() - Corner2.GetX());
	hgt =  	abs(Corner3.GetY() - Corner2.GetY());
}



main()
{
	Point P1(1,1);
	Line L1(1,1,2,2);
	Rectangle R1(1,1,2,2,3,3,4,4); // Corners are not valid :)

	P1.PrintPoint();
	L1.PrintLine();
	R1.PrintRectangle();
	
}


