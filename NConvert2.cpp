// file : Nconvert 

#include <iostream>

using namespace std ;

int main()
{
	int maxTerms = 8;
	int x = 2;
	
	int sign = 1, term = 1, i = 1;
	
	do 
		
	{
		sign = -sign;
		term = term*x;
		
		if(0 == i%2)
		{
			cout << i << " : ";
			if (0 < sign)cout << "-";
			else cout << "+";
			cout << term << endl;
			
		}
		i ++;
	}
	while (i <= maxTerms);
	
	return 0;
}
