#include <iostream>
#include <cmath>

using namespace std;
// main() is where program execution begins.
int main()
{
cout << "Hello World" << endl ;// prints Hello World
 //int i, Sum;
 
/*for ( i = 10; i > 0; i--)
{
    Sum = Sum + i;
    cout << Sum << endl;
}*/

int x = 1;
for ( int i = 1; i <= 10; i++)
{
    x = x*2;
    cout << x << " ";
    
}
 cout << endl;
 
 int j = 5;
 do
    {
        j--;
		cout << j << " ";
    } while (j > 0);
 cout << endl;
 
int k = 13;
while (k%2)
	{
		k = k/3;
		cout << k << " ";
	
	}
 
 cout << endl;
 
float y ;
cout << " Input y (must be positive): ";
cin >> y;

int l = 0;
const int NMax = 1000;
const float SMALL = 0.0001;
float xPower = 1.0, lastTerm, Sum = 0.0;

do 
	{
		l ++;
		xPower = y*xPower;
		lastTerm = xPower/l;
		Sum = Sum + lastTerm;
	}while (l < NMax && lastTerm > SMALL );
	
if (l == NMax)
	cout << "Series did not converge\n";
else
	{
		cout << "l        =" << l << "\n"
			 << "x        =" << y << "\n"
			 << "lastTerm =" << lastTerm << "\n"
			 << "Sum      =" << Sum << "\n";
			 
	}
	
return 0;
}
