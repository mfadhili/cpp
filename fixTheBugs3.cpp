// fix the bugs III

#include <iostream>

using namespace std;

int sumInts(int a, int b)
{
	int i = a + b;
	return i;
}

int main()
{
	int i = 1, j = 2;
	cout << "the sum of integers i = " << i << " and j = " << j << " is: "
		<<sumInts(i,j) << endl;
		return 0;
			
}
