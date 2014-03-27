#include <iostream>
#include "Time.h"

using namespace std;
    Time::Time(){
        jam     =   0;
        menit   =   0;
        detik   =   0;
    }
    Time::Time(int _jam, int _menit, int _detik){
        jam     =    _jam;
        menit   =   _menit;
        detik   =   _detik;
    }
    Time::Time(const Time& t){
        jam     =   t.jam;
        menit   =   t.menit;
        detik   =   t.detik;
    }
    Time& Time::operator=(const Time& t){
        jam     =   t.jam;
        menit   =   t.menit;
        detik   =    t.detik;
        return *this;
    }
    bool Time::operator>(const Time& t){
        bool status;
        if(jam > t.jam)
            status= true;
        else{
            if(jam == t.jam)
            {
                if(menit > t.menit)
                    status=  true;
                else{
                    if(detik > t.detik){
                        status=  true;
                    }else{
                        status=  false;
                    }
                }
            }
        }
        return status;
    }

    bool Time::operator==(const Time& t){
        return (jam == t.jam) && (menit == t.menit) && (detik == t.detik);
    }

    Time::~Time(){
    }
    void Time::setJam(int _jam){
        this->jam   =   _jam;
    }
    void Time::setMenit(int _menit)
    {
        this->menit =   _menit;

    }
    void Time::setDetik(int _detik){
        this->detik =   _detik;
    }

    int Time::getJam(){
        return jam;
    }
    int Time::getMenit(){
        return menit;
    }
    int Time::getDetik(){
        return detik;
    }
