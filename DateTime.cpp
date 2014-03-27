
#include "DateTime.h"

using namespace std;

    DateTime::DateTime(){
        Date date(0,0,0);
        Time btime(0,0,0);
    }

    DateTime::DateTime(Date D, Time t){
        date    =   D;
        btime   =   t;
    }
    DateTime::DateTime(const DateTime& DT){
        date   =   DT.date;
        btime    =  DT.btime;
    }
    DateTime& DateTime::operator=(const DateTime& d){
        date   =   d.date;
        btime  =  d.btime;
        return *this;
    }
    
    bool DateTime::operator>(const DateTime& d){
        if(date > d.date)
            return true;
        else if(date == d.date)
            return btime > d.btime;
        return false;
    }
	

    bool DateTime::operator==(const DateTime& d){
        return (date == d.date) && (btime == d.btime);
    }
    DateTime::~DateTime(){
    }
    void DateTime::setTime(Time _time){
        this->btime  =    _time;
    }
    void DateTime::setDate(Date _date){
        this->date  =    _date;
    }
    Time DateTime::getTime(){
        return btime;
    }
    Date DateTime::getDate(){
        return date;
    }

