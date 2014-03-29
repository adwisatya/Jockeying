#include <iostream>
#include "Event.h"

using namespace std;

Event::Event()
{
	kode = '\0';
	id = 0;
}

Event::Event(DateTime _dateTime, char _kode, int _id)
{
	datetime = _dateTime;
	kode = _kode;
	id = _id;
}

Event::Event(const Event& E)
{
	kode = E.kode;
	id = E.id;
}

Event& Event::operator=(const Event& E)
{
	kode = E.kode;
	id = E.id;
	return *this;
}

Event::~Event(){}

void Event::setKode(char _kode)
{
	this->kode = _kode;
}

void Event::setId(int _id)
{
	this->id =_id;
}

void Event::setDateTime(DateTime _DT)
{
	this->datetime = _DT;
}

char Event::getKode()
{
	return kode;
}

int Event::getId(){
	return id;
}

DateTime Event::setDateTime()
{
	return datetime;
}