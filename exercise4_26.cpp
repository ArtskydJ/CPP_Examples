//Exercise 4.26 Palindrome Finder
#include <iostream>
//#include <iomanip>
using namespace std;
int a,b,c,d,e,x;
int main()
{
  cout << "Type a 5 digit number.\nI will check if it is a palindrome.\n";
  cin >> x;
  if (9999<x<100000)
    {
    a=(x%10);
    b=((x%100)-a)/10;
    c=((x%1000)-b-a)/100;
    d=((x%10000)-c-b-a)/1000;
    e=((x%100000)-d-c-b-a)/10000;
    if (a==e && b==d)
      cout << "That's a palindrome!" << endl;
    else
      cout << "That's no palindrome!" << endl;
    //cout << "E=" << e << ", D=" << d << ", C=" << c << ", B=" << b << ", A=" << a;
    }
  else
    {
    cout << "A 5 digit number you knucklehead!";
    }
  return a;
}
