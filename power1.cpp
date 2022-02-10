// File: power1.cpp

#include <iostream>

using namespace std;

float pow(float x, int n)
{
	float result; //The result of the calculation
	
	// An implementation of the al-Kashi algorithm
	
	if(0 > n)
	{
		n = -n;
		x = 1/x;
	}
	
	result = 1;
	
	while(1 <= n)
	{
		if(0 == n%2)
		{
			n = n/2;
			x = x*x;
		}
		else
		{
			n = n - 1;
			result = result*x;
			
		}
	}
	return result;
}

int main()
{
	cout << "A calculation of X to power of N" << endl;
	float X;
	int N;
	
	cout << "Input X and N: ";
	cin >> X >> N;
	
	float result;
	
	result = pow(X,N);
	
	cout << X << "to the power "<< N << " = " << result << endl;
	
	return 0;
}
