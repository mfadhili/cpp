#include <iostream>

using namespace std;

float fMax(float& f1, float& f2)
{
	if (f2 > f1)
	{
		float temp = f2; // f2 is maximum
		f2 = f1; 
		f1 = temp;// switch them
		return f1;
	}
	else return f1; // f1 must already be maximum
}

int main()
{
	cout << "Input 2 float's: ";
	float a, b;
	cin >> a >> b;
	cout << "Maximum is: " << fMax(a,b) << endl;
	cout << "Descending order is: " << a << ", "<< b << endl;
	
	return 0;
}
