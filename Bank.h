#ifndef _BANK_H
#define _BANK_H
#include "DateTime.h"
#include "Queue.h"
#include "Event.h"

using namespace std;

class Bank{
public:
    Bank();
	Bank(DateTime, int);
	Bank(const Bank&);
	Bank& operator=(const Bank&);
	~Bank();

	void setN(int);
	void setDateTime(DateTime);
	void setQueue(Queue, int);
	
	int getN();
	DateTime getDateTime();
	Queue getQueue(int);
		
    int Jockeying(int);
    void Arrival(int);
    void Departure(int);
	void Print();
	void Sweep();
	void Push(int _nQ,int _n);
	static int i;

private:
    int N;
    DateTime TMax;
    Queue *arrayQ;
    
};
#endif // _BANK_H
