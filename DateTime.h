#ifndef _DATETIME_H
#define _DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"

class DateTime{
public:
    DateTime();
    DateTime(Date, Time);
    DateTime(const DateTime& DT);
    DateTime& operator=(const DateTime& d);
	bool operator>(const DateTime& d);
    bool operator==(const DateTime& d);
    ~DateTime();
    void setTime(Time _time);
    void setDate(Date _date);
    Time getTime();
	Date getDate();

private:
    Date date;
    Time btime;
};
#endif // _DATETIME_H
