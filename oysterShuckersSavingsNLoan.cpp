// File: oytersShuckersSavingsNLoan.cpp
// This banks savings deal gives 1% interest for months that have letter "r" 
//i.e (Jan, Feb, Mar, Apr, Sept, Oct Nov, Dec) not (May, June, July, August)

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int currentMonth, startMonth, months;
	float deposit,bal;
	string month[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	
	cout << "Input the amount deposited: ";
	cin >> deposit;
	
	cout << "Input the Number of the current month (1-12): ";
	cin >>  startMonth;
	
	cout << "Input the Number of months the money is in the bank: ";
	cin >>  months;
	 
	bal = deposit;
	
	for(int i = 1; i <= months; i++ )
	{
		currentMonth = (startMonth + i)%12 + 1;
		 if(currentMonth <= 4 || currentMonth >= 9)
		 {
			 bal = bal*1.01;
		}
		//cout << currentMonth << endl;
		cout << "After " << month[currentMonth-1] << ", the balance is: " << bal << endl;
		
	}
	return 0;
}
