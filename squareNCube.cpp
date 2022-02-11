#include <iostream>

using namespace std;

float squareCube(float x, float& xx)
{
	xx = x*x;
	return xx*x;
}

int main()
{
	float x = 2.0, xx, xxx;
	xxx = squareCube(x,xx);
	cout << "Square of x: " << xx << ", Cube of x is " << xxx << endl;
	return 0;
}
