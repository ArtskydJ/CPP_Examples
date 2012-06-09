/*

Enter miles driven (-1 to quit): 287
Enter gallons used: 13
MPG this tankful: 22.076923
Total MPG: 22.076923

*/

#include <iostream>
using namespace std;
int miles, gallons,count;
double currentmpg, totalmpg;


void main()
  {
  count=0
  totalmpg=0
  miles=0
  while miles!=-1
    {
    cout << "Enter miles driven (-1 to quit): ";
    cin >> miles;
    if miles=-1 then
      {cout << endl << "Goodbye";}
    else
      {
      cout << endl << "Enter gallons used: ";
      cin >> gallons;
      currentmpg=miles/gallons;
      cout << endl << "MPG this tankful: " << currentmpg;
      totalmpg=((totalmpg*count)+currentmpg)/(count+1)
      cout << endl << "Total MPG: " << totalmpg << endl;
      count++
      }
    }
  }
