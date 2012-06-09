#include <iostream>
#include <iomanip>
using namespace std;
double pi=0,x=1,y=1;
int main(){
  while (true){
    pi=pi+(y*(4/x));
    cout << setprecision(16) << pi << endl;
    y=y*(-1);
    x+=2;}}
