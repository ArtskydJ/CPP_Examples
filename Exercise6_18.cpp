//Exercise 6.18
#include <iostream>
using namespace std;
int a,c,d,f;
int integerPower(int b,int e);

int main()
  {
  cout << "Enter Base: ";
  cin >> c;
  cout << "Enter Exponet: ";
  cin >> f;
  cout << integerPower(c,f);
}

int integerPower(int b, int e)
  {
  int d=b;
  for (int a=1;a<e;a++)
    {
    d*=b;
    }
  return d;
  }
