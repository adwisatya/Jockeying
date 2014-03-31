
#include "Event.h"

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
ostream &operator<<(ostream &output,const Event &e){
	output << e.datetime << " " << e.kode<< " " << e.id;
	return output;
}
istream &operator>>(istream &input, Event &e){
	DateTime dt;
	char _kode;
	int _id;
	char tanda;
	input >> dt >> tanda>> _kode>>tanda>>_id;
	e.setDateTime(dt);
	e.setKode(_kode);
	e.setId(_id);
	return input;
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

DateTime Event::getDateTime(){
	return datetime;
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