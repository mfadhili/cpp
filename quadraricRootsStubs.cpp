// File: quadraticRootsStubs.cpp

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//function quadraticRootsStubs
bool realQuadraticRoots(float a, float b, float c)
{
	if( 0 > (b*b - 4*a*c)) 
		return false;
	else if(0 == a && 0 == b)
	{
		cout << endl <<"both a and b are zero" << endl;
		exit(EXIT_FAILURE);
	}
	else return true;
}

int numberQuadraticRoots(float a, float b, float c)
{
	if(0 == a || 0 == (b*b - 4*a*c))
		return 1;
	else
		return 2;
}

void twoQuadraticRoots(float A, float B, float C)
{
	float twoA = 2*A, twoC = 2*C, radical = sqrt(B*B - twoA*twoC) - B;
	cout << "Solution 1 : " << radical/twoA << endl;
	cout << "SOlution 2 : " << twoC/radical << endl;
}

int main()
{
	cout << "Solving quadratic roots" << endl << "a, b ,c :";
	float a, b, c;
	cin >> a >> b >> c ;
	
	if(realQuadraticRoots(a,b,c) && 2 == numberQuadraticRoots(a,b,c))
	{
		twoQuadraticRoots(a,b,c);
	}
	
	return 0;
}
