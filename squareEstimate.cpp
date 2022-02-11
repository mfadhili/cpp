// File squareEstimate.cpp 
// method obtains the square root of positive numbers using Heron's formula a.k.a Babylonian method
// method obtained from wikipedia https://en.wikipedia.org/wiki/Methods_of_computing_square_roots

#include <iostream>

using namespace std;

double sqRt(double num)
{
	double temp0 = 0, temp1 = 0, x, sqrt;
	
	if( num < 0)
	{
		cout << "Number is negative" << endl;
		return 0;
	}
	
	else
	{
		x = num;
	temp1 = x;
	
	while ((temp1 - temp0) > 1)
	{
		temp1 = x;
		temp0 = 0.5*(x + (num/x));
		//cout << endl << temp0 << endl;
		x = temp0; 
	}
	
	return temp0;
	}
	
}

int main()
{
	double num;
	cout << "Input the number for square: " ;
	cin >> num;
	cout <<sqRt(num) << endl;
	return 0;
}
