#include <iostream>
#include "Date.h"

using namespace std;
    Date::Date(){
        tahun   =   0;
        bulan   =   0;
        tanggal =   0;
    }
    Date::Date(int _tanggal,int _bulan,int _tahun){
        tahun   =   _tahun;
        bulan   =   _bulan;
        tanggal =   _tanggal;
    }
    Date::Date(const Date& d){
        tahun   =   d.tahun;
        bulan   =   d.bulan;
        tanggal =   d.tanggal;
    }
    Date& Date::operator=(const Date& d){
        tahun   =   d.tahun;
        bulan   =   d.bulan;
        tanggal =   d.tanggal;
        return *this;
    }
    bool Date::operator>(const Date& d){
        if(tahun > d.tahun)
            return true;
        else if(tahun == d.tahun)
        {
            if(bulan > d.bulan)
                return true;
            else if(bulan == d.bulan)
                return tanggal > d.tanggal;
        }

        return false;
    }

    bool Date::operator==(const Date& t){
        return (tahun == t.tahun) && (bulan == t.bulan) && (tanggal == t.tanggal);
        //return true;
    }

    Date::~Date(){}
    void Date::setTahun(int _tahun){
        this->tahun     =   _tahun;
    }
    void Date::setBulan(int _bulan){
        this->bulan     =    _bulan;
    }
    void Date::setTanggal(int _tanggal){
        this->tanggal   =   _tanggal;
    }
    int Date::getTanggal(){
        return tanggal;
    }
    int Date::getBulan(){
        return bulan;
    }
    int Date::getTahun(){
        return tahun;
    }
