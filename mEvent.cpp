#include <iostream>
#include "Event.h"
#include "DateTime.h"
#include "Date.h"
#include "Time.h"
using namespace std;

int main()
{
	Time T(1,2,3);
	Date D(4,5,6);
	DateTime DT(D, T);

	Event E1, E4;
	Event E2(DT, 'A', 0);
	Event E3 = E2;
	E4 = E3;

	E1.setDateTime(DT);
	E1.setKode('D');
	E1.setId(7);
	return 0;
}