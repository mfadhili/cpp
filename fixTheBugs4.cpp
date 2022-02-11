// fix the bugs 4

# include <iostream>
# include <cmath>

using namespace std;

float trigs(float y, float& f1, float& f2)
{
	f1 = sin(y);
	f2 = cos(y);
	return 0;
	
}

int main()
{
	float x = 0.0, cosx, sinx;
	int returnValue = trigs(x, sinx, cosx);
	cout << "sin(" << x << ") = " << sinx << ", "
		 << "cos(" << x << ") = " << cosx << endl;
	return 0;
	
}
