#ifndef _EVENT_H
#define _EVENT_H

#include "Date.h"
#include "Time.h"
#include "DateTime.h"

class Event{
public:
	Event();
	Event(DateTime, char, int);
	Event(const Event& E);
	Event& operator=(const Event& E);
	~Event();

	void setKode(char);
	void setId(int);
	void setDateTime(DateTime);
	char getKode();
	int  getId();
	DateTime setDateTime();
private:
	DateTime datetime;
    char kode;
    int id;
};
#endif // _DATE_H
