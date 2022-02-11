# include <iostream>

using namespace std;

void sort3(int& i, int& j)
{
	int t1;
	
	if (i > j)
	{
		t1 = i;
		i = j;
		j = t1;
	}
	
}

int main()
{
	int i = 5, j = 3, k = 1;
	sort3(i,j);
	sort3(j,k);
	sort3(i,j);
	cout << "In ascending order (smallest -> largest) "
		 << "the three int's are: "
		 << i << ", "<< j << ", " << k << endl;
	return 0;
}
