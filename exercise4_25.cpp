//Exercise 4.25 Asterisk Square
#include <iostream>
using namespace std;
int a,x,y;
void bar();
int main()
  {
  cout << "Enter square's side length: ";
  cin >> a;
  cout << endl;
  //a=a-1;
  bar();
  if (a>=2)
    {
    for (y=2; y<a; y++)
      {
      for (x=0; x<a; x++)
        {
        if (x==0 or x==(a-1))
          cout << "*";
        else
          cout << " ";
        }
      cout << endl;
      }
    bar();
    }
  }

void bar()
  {
  for (x=0; x<a; x++)
    {cout << "*";}
  cout << endl;
  }
