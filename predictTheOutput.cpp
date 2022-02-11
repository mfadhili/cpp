// cyclic procedure

#include <iostream>

using namespace std;

void cyclic(int& i, int& j, int& k, int& l)
{
	int m;
	m = i;
	i = j;
	j = k;
	k = l;
	l = m;
}

int main()
{
	int i = 1, j = 2, k = 3, l = 4;
	cyclic(i, j, k, l);
	cout << "i,j,k,l: " << i << j << k << l << endl;
	return 0;
}
