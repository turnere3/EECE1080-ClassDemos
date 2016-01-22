#include <iostream>
using namespace std;

int main()
{
int a = 0;
int b = 5;
int c = 10;
int d = 15;

if ((d > b) && (c < b))
{
cout << "Ohio" << endl;
}
else
{
cout << "Utah" << endl;
}
if ((a*c != d) || (b+c > d))
{
cout << "Hawaii" << endl;
}
else
{
cout << "Iowa" << endl;
}
if (!(a+d == b+c))
{
cout << "Maine" << endl;
}
else
{
cout << "Alaska" << endl;
}
return 0;
}

