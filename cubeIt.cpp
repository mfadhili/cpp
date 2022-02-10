// cube it simple function
#include <iostream>

using namespace std; 

//Function cubeit0

double cubeit0(double x)
{
	double cube = x*x*x;
	
	return cube;
}


//Function cubeit1

void cubeit1(double x, double& result)
{
	result = x*x*x;
}

int main()
{
	cout << "Input a number to be cubed: ";
	double x;
	cin >> x;
	
	cout << cubeit0(x) << endl;
	
	double result;
	cubeit1(x,result);
	cout << result << endl;
	
	return 0;
}
