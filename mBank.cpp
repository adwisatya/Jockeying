#include <iostream>
#include "Bank.h"

using namespace std;

int main(){
	
	DateTime batas;
	int n;
	Queue myqueue;
	myqueue.push(10);
	cin >> batas;
	cin >> n;
	Bank mybank;
	mybank.setDateTime(batas);
	mybank.setN(n);
	cout << mybank.getDateTime();
	cout << mybank.getN();
	mybank.setQueue(myqueue,1);
	mybank.Print();
	return 0;
}