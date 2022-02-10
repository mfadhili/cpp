// File coumpoundInterest.cpp 
// deposit accumulates interest at 5% per year
// stops when your money has atleast doubled

#include <iostream>

using namespace std;

int main()
{
	float amnt, nwBal, rate = 1.05;
	int year;
	
	cout << "Input the starting balance: ";
	cin >> amnt;
	cout << endl;
	nwBal = amnt;
	
	do
	{
		nwBal = nwBal*rate;
		year++;
		
		cout << "After year " << year << " , balance = " << nwBal << endl;
	}
	while(nwBal < 2*amnt);
	
	return 0;
}
