// File: fixTheBugs2.cpp 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cout << "Input x: ";
	cin >> x ; 
	
	double xPower = x;
	double Sum = 1;
	int sign = 1, f=1;
	
	for(int i = 0; i <= 5; i = i + 1 )
	{
		sign = -sign;
		if (i != 0) f = f*i;
		
		Sum = Sum + (pow(x,2*i)/f)*sign;
	};
	
	cout << "Sum = " << Sum << endl;
	return 0;
	
}
