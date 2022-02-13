/* File: whereIsWaldo.cpp
 waldo is on a mission to go home
 His dimension plane is -10 <= x <= 10 and -10 <= y <= 10
 and his home is 8 <= x <= 10 and -8 <= y <= 10
 he is either stillWalking or atHome
 while walking, he stops every 1000 to restrategise
*/

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

// global defination of PI and waldo status

const double PI = 180;
int stillWalking = 1, atHome = 0;

// check on Waldo position
void checkWaldo(double x, double y)
{
	if (x < 10 && x >= 8 && y < 10 && y >= 8)
	{
		atHome = 1;
		stillWalking = 0;
	}
	
	else 
	{
		atHome = 0;
		stillWalking = 1;
	}
}

int main()
{
	
	// Enter the search
	
	cout << "Press ENTER  to continue.";
	cin.ignore();
	
	
	int steps = 0;
	double x = 0, y = 0, dx = 0, dy = 0;
	double angle;
	
	while(stillWalking >= 1)
	{
		for(int i = 0; i < 1000 & atHome == 0; i++)
		{
			angle = 2*PI*(rand()%RAND_MAX);
			dx = cos(angle);
			dy = sin(angle);
			
			x = x + dx;
			y = y + dy;
			
			checkWaldo(x,y);
			
			steps++;
			
		}
		
		if(atHome != 1)
		{
			cout << "Waldo has taken " << steps << " steps and is not yet a home (" << x << "," << y << ")"  
				 << endl << "Would you like to CONTINUE (1) or STOP (0): ";
			cin >> stillWalking;
			
		}
		else
		{
			cout << "Waldo has arrived home after " << steps << " steps";
			break ;
		}
	} 
	
	
	return 0; 
}
