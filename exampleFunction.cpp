// File: exampleFunction.cpp
// Function below is achieved:
// f(x,x0,x1) = (x*sin(x))/(1+x) for range x0 < x < x1
// Function is a double type
// if x is outside the range, NaN is returned

#include <iostream>
#include <cmath>

using namespace std; 

//Function goes here
double myFunction(double x, double x0, double x1)
{
	double result;
	if(x0 < x && x < x1)
	{
		result = (x*sin(x))/(1 + x);
		return result;
	}
	else 
	{
		result = 0;
		cout << "NaN ";
	}
	
}

int main ()
{
	cout << "input x, x0, x1: ";
	double x, x0, x1;
	cin >> x >> x0 >> x1;
	
	cout << "Evaluation of the Function at x = " << x 
		 << " between the limits x0 = " << x0 
		 << " and x1 = " << x1 << endl;
	
	cout << "f("<< x << ") = " << myFunction(x, x0, x1) << endl;
	
	return 0;
}

