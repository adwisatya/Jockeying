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
	Event coba;
	cin >> coba;
	cout << coba.getDateTime();
	cout<< coba.getKode();
	cout << coba.getId();
	return 0;
}