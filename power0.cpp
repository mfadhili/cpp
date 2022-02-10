// File power0.cpp

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	cout << "A calculation of X (float) to the power of N (int)" << endl;
	
	float X; // THe float to be raised to a power
	int N;  // POwer to be raised to
	cout << "Input X (float) and N (int): " ;
	cin >> X >> N;
	
	float result; // calculation result
	
	result = pow(X,N);
	cout << X << "to the power of "<< N << " = "<< result << endl;
	
	return 0;
}
