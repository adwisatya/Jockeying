#ifndef _EVENT_H
#define _EVENT_H

#include <iostream>
#include "Date.h"
#include "Time.h"
#include "DateTime.h"

using namespace std;

class Event{
public:
	Event();
	Event(DateTime, char, int);
	Event(const Event& E);
	Event& operator=(const Event& E);
	~Event();
	friend ostream &operator<<(ostream &output,const Event &e);
	friend istream &operator>>(istream &input, Event &e);
	void setKode(char);
	void setId(int);
	void setDateTime(DateTime);
	DateTime getDateTime();
	char getKode();
	int  getId();
	DateTime setDateTime();
private:
	DateTime datetime;
    char kode;
    int id;
};
#endif // _DATE_H
