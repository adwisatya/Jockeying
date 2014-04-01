#include <iostream>
#include "Time.h"
using namespace std;

int main(){
    Time cTime;
    Time xTime(12,2,19);
    cout << "xTime: " << endl;
    cout<< "Detik: " << xTime.getDetik() << endl;
    cout<< "Menit: " << xTime.getMenit()<< endl;
    cout << "Jam: " << xTime.getJam()<< endl;
    cTime.setDetik(12);
    cTime.setMenit(45);
    cTime.setJam(13);
    cout << "cTime: " << endl;
    cout<< "Detik: " << cTime.getDetik() << endl;
    cout<< "Menit: " << cTime.getMenit()<< endl;
    cout << "Jam: " << cTime.getJam()<< endl;
    xTime   =   cTime;
    cout << "xTime: " << endl;
    cout<< "Detik: " << xTime.getDetik() << endl;
    cout<< "Menit: " << xTime.getMenit()<< endl;
    cout << "Jam: " << xTime.getJam()<< endl;

    cout << "Apakah cTime > xTIme" << cTime.operator>(xTime) << endl;
    cout << "Apakah cTime == xTime" << cTime.operator==(xTime) << endl;
	cout <<xTime << endl;
	cin  >>xTime;
	cout <<xTime;
	cout << endl;
    return 0;
}
