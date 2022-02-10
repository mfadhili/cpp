// File: Least common multipliers 
#include <iostream>

using namespace std;

int main()
{
	int n, i, p = 1;
	
	cout << "Enter a positive integer : ";
	cin >> n;
	
	cout << endl << " = " ;
	
	for(i = 1; i <= n &&  n > p; ++i)
	{
		if(n%i == 0)
		{
			
			do
			{
				p = p*i;
				cout << i << " x " ;
				
			}
			while( n%p != 0 || (n/p) == i || (n/(p*p)) == i);
		}
		
	
	}
	cout << endl << p << endl;
	return 0;
}
