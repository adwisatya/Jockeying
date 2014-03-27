#include "DateTime.h"
#include "Bank.h"
#include "Event.h"
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	DateTime temp(Date(0,0,0), Time(0,0,0)), Tmax;
	int n, no;
	Event E;
    char c;

	cin >> Tmax;
	cin >> n;

	Bank bank(n);

	while((temp < Tmax) && (cin >> temp))
	{
		if(temp >= Tmax)
		{
			cin >> space >> c;
			if(c == 'A')
			{
				E = new Event(temp, c, 0);
				bank.Arrival(E);
			}
			else //if(c == D)
			{
				cin >> no;
				E = new Event(temp, c, no);
				bank.Departure(E);
			}
		}
	}

	bank.sweep();
	return 0;
}
