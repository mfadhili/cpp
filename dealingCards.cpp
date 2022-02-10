#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	srand(time(NULL));
	string rank[13] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
	string deck[4] = {"Spades","Diamonds","Clubs","Hearts"};
	
	for(int nCards = 1; nCards <= 5; nCards++)
	{
		int r = rand()%13 + 1;
		int d = rand()%4 + 1;
		
		cout << "Card " << nCards << " is a " << rank[r] << " of " << deck[d] << endl;
		
	}
	return 0;
	
}
