// File: alKashi.cpp
#include <iostream>

using namespace std;

int main()
{
	cout << "A calculation of X (float) to the power of N (int)" << endl;
	
	float X; // THe float to be raised to a power
	int N;  // POwer to be raised to
	cout << "Input X (float) and N (int): " ;
	cin >> X >> N;
	
	float result; // calculation result
	
	// Open a new scope or code block
	{
		//Implementation of the al-Kashi algorithm
		int n = N;  //internal variable
		float x = X;// internal variable
		
		if(0 > N)//a trick for calculating negative powers
		{
			n = -N;
			x = 1/X;
		}
		
		result = 1; // intitial value
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
	} //end of scope block
	cout << X << " to the power " << N << " = " << result << endl;
	
	return 0;
}
