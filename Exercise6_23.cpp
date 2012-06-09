//Exercise 6.23
#include <iostream>
using namespace std;
int x,y,z;
char c;

int main()
  {
  cout << "Side: ";
  cin >> z;
  cout << "Char: ";
  cin >> c;
  for (x=1;x<=z;x++)
    {
    for (y=1;y<=z;y++)
      {
      cout << c;
      }
    cout << endl;
    }
  }
