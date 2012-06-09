//Exercise 4.16 Salary Calculator
#include <iostream>
#include <iomanip>
using namespace std;
int hours=0;
double dph=0;
double result=0;

int main()
  {
  while (hours != -1)
    {
    cout << "Enter hours worked (-1 to end): ";
    cin >> hours;
    if (hours != -1)
      {
      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> dph;
      if (hours <= 40)
        {
        result = static_cast<double> (hours)*(dph);
        }
      else
        {
        result = static_cast<double>(40*dph)+((hours-40)*dph*1.5);
        }
      cout <<"Salary is: $" << setprecision(5) << result << endl << endl;
      }
    }
  return result;
  }
