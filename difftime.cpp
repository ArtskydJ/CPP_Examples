//difftime
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main ()
{
  time_t start,end;
  char szInput [256];
  double dif;

  time(&start);
  cout<<"Please, enter your name: ";
  cin>>szInput;
  time(&end);
  dif = difftime(end,start);
  cout<<"Hi "<<szInput<<".\n";
  cout<<"It took you "<<setw(4)<<dif<<" seconds to type your name.\n";

  return 0;
}
