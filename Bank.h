#ifndef _BANK_H
#define _BANK_H

class Bank{
public:
    Bank();
	Bank(DateTime, char, int);
	Bank(const Bank&);
	Bank& operator=(const Bank&);
	~Bank();

	void setN(int);
	void setDateTime(DateTime);
	void setQueue(Queue, i);
	
	int getN();
	DateTime getDateTime();
	Queue getQueue(i);
		
    int Jockeying(int);
    void Arrival(Event);
    void Departure(Event);
private:
    int N;
    DateTime TMax;
    Queue T[];
    static int i;
};
#endif // _BANK_H
