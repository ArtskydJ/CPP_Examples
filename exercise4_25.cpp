//Exercise 4.25 Asterisk Square
#include <iostream>
using namespace std;
int a,x,y;

void horizontalLine()
	{
	for (x=0; x<a; x++)
		cout << "*";
	cout << endl;
	}

void sideLines()
	{
	for (y=2; y<a; y++)
		{
		for (x=0; x<a; x++)
			{
			if (x==0 or x==a-1)
				cout << "*";
			else
				cout << " ";
			}
		cout << endl;
		}
	}

int main()
	{
	cout << "Enter square's side length: ";
	cin >> a;
	cout << endl;
	//a=a-1;
	horizontalLine();
	if (a>=2)
		{
		sideLines();
		horizontalLine();
		}
	}


