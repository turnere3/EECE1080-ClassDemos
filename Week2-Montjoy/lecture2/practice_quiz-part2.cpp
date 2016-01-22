#include <iostream>
using namespace std;
int main()
{
int a = 0;
int b = 5;
int c = 10;
int d = 15;
if (a < d)
{
cout << "Mercury" << endl;
}
else
{
if (b < c)
{
cout << "Venus" << endl;
}
else
{
cout << "Mars" << endl;
}
}
if (b+c == d)
{
if (a > c)
{
cout << "Jupiter" << endl;
}
}
else {
cout << "Saturn" << endl;
}
return 0;
}

