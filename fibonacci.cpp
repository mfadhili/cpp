#include <iostream>

using namespace std;

int main()
{
	// fibonacci integers
	float n1 = 1, n2 = 1, n3;
	
	//golden ratio and series limit
	float r1 =1.5;
	int limit;
	
	//input limit
	cout << "what is the limit for the series: ";
	cin >> limit;
	cout << endl;
	
	cout << n1;
	
	do
	{
		// check golden ratio convergence
		if(r1 == 1.6177)
		{
			//break;
			cout << endl <<"series converged";
		}
		
		//Fibonacci series
		n3 = n2 + n1;
		n1 = n2;
		n2 = n3;
		
		cout << "," << n1; 
		
		r1 = n2/n1;
		
	}while( n3 < limit);
	
	cout << endl << r1;
	 return 0;
}
