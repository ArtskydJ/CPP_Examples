//Exercise 4.19 Find the 2 largest numbers
#include <iostream>
using namespace std;
int a[10];
int biggest=0,bigger=0;
int main()
  {
  cout << "Input 10 numbers:" << endl;
  cin >> a[0];
  cin >> a[1];
  cin >> a[2];
  cin >> a[3];
  cin >> a[4];
  cin >> a[5];
  cin >> a[6];
  cin >> a[7];
  cin >> a[8];
  cin >> a[9];
  bigger=a[0];
  biggest=a[0];
  for (int b=0;b<10;b++)
    {
    if (a[b]>bigger)
      {
      if (a[b]>biggest)
        {
        bigger=biggest;
        biggest=a[b];
        }
      else
        {
        bigger=a[b];
        }
      }
    }
  cout << "Biggest: " << biggest << endl << "2nd Biggest: " << bigger;
  }
