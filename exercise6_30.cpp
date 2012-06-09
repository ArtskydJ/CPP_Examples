//Exercise 4.26 Number reverser
#include <iostream>
//#include <iomanip>
using namespace std;
int a[8];
int b,c=0,t,x,y;
int main()
  {
  cout << "Enter number: ";
  cin >> x;
  if (x<100000000)
    {
    b=0;
    for (int n=1; n<x; n*=10)
      {
      a[b]=(((x%(n*10))-c)/n);
      c+=a[b];
      b++;
      }
    for  (int n=0; n<b; n++)
      {
      cout << a[n];
      }
    cout << endl;
    }
  else
    {
    cout << "Too big.";
    y=0;
    }
  }
