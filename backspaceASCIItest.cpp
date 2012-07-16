//backspaceASCIItest
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
  cout<<"hello";
  Sleep(1000);
  cout<<"\r";
  Sleep(1000);
  cout<<setw(3)<<"EL";
  Sleep(1000);
}
