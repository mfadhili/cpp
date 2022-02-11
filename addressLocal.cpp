// File: addressLocalGlobal.cpp
// obtaining adresss of a variable using the unary operator "&"

#include <iostream>

using namespace std;

float u = 1.0;
double v = 3.0;

int main()
{
	float x = 1.0;
	double y = 3.0;
	int z = 2;
	
	cout <<
		"x's value: " << x << " x's adress: " << &x << endl <<
		"y's value: " << y << " y's adress: " << &y << endl <<
		"z's value: " << z << " z's adress: " << &z << endl <<
		"u's value: " << u << " u's adress: " << &u << endl <<
		"v's value: " << v << " v's adress: " << &v << endl;
		
		return 0;
		
}
