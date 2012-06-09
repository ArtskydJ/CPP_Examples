//Rook Polynominal
#include <iostream>
using namespace std;
int x,y,xx,yy,f(int);
int long ans;
int main()
{
  cout<<"How many rooks? ";
  cin>>x;
  cout<<"What size board? (Probably the same as rooks) ";
  cin>>y;
  y=y*y;
  xx=f(x);
  yy=f(y);
  //ans=yy/(xx*(y-x));
  cout<<yy/(xx*(y-x));
  return yy/(xx*(y-x));
}

int f(int n)
  {
  int fact=1;
  if(n>1)
    {
    for(int i=n;i>1;i--)
      {
      fact*=i;
      }
    }
  return(fact);
  }

