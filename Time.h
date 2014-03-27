#ifndef _TIME_H
#define _TIME_H

class Time{
public:
    Time();
    Time(int,int,int);
    Time(const Time& t);
    Time& operator=(const Time& p);
    bool operator>(const Time& p);
    bool operator==(const Time& p);
    ~Time();

    void setJam(int);
    void setMenit(int);
    void setDetik(int);
    int getJam();
    int getMenit();
    int getDetik();

private:
    int jam;
    int menit;
    int detik;
};
#endif // _TIME_H
