// File: primalLoopTherapy.cpp 
// program uses general formula for prime numbers greater than 3 
// 6*n + 1 and 6*n - 1

#include <iostream>

using namespace std;

int main()
{
	cout << "Program gives you prime numbers upto a given limit greater than 3" << endl
		 << "Give the limit value: ";
	int p = 0, n = 1, limit, sign = 1;
	cin >> limit;
	
	cout << "The prime numbers upto " << limit << " are :" << endl;
	
	if(limit >= 3)
	{
		for(int i = 1; i < limit && i != 4;)
		{
			p = i;
			cout << p <<endl;
			i++; 
		}
	}
	
	while (p < limit )
	{
		//sign = -sign; 
		p = 6*n - 1;
		cout << p <<endl;
		
		if (p < limit)
		{
			p = 6*n + 1;
			cout << p <<endl;
		}
		
		n++;
		
	}
}
