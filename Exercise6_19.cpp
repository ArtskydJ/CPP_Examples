//Exercise 6.19
#include <iostream> //cout and cin
#include <cmath>    //sqrt
using namespace std;
double x,y,h;

int main()
{
  cout << "Enter side 1: ";
  cin >> x;
  cout << "Enter side 2: ";
  cin >> y;
  h=sqrt((x*x)+(y*y));
  cout << h;
}
