// Fix the bugs (Conceptual and compiler errors) 	--FIXED

#include <iostream>

using namespace std;

int main()
{
	float x;
	cout << "input x: ";
	cin >> x;
	
	float Sum = 1, p = 1; // COnceptual errors 
	int i = 0,N = 10, sign = 1;
	
	do 
	{
		i = i + 1; // compiler errors here
		p = p*x ; // COnceptual errors here
		if (i%2 == 0)
		{
			sign = -sign;
			Sum = Sum + p*sign; // Conceptual errors here
		}
		
	} while(i <= N); // compiler errors here
	
	cout << "Sum = " << Sum << endl;
	
	return 0;
}
