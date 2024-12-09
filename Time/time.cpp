#include "time.h"

#include <iostream>
using namespace std;

// defining constructor
Time ::Time(int h, int m, int s)
{
    // setHour(h);
    // setMin(m);
    // setSec(s);
    setTime(h, m, s);
}

// copy constructor
Time ::Time(const Time &t)
{
    hour = t.hour;
    min = t.min;
    sec = t.sec;
}

void Time ::setTime(int hour, int min, int sec)
{
    setHour(hour);
    setMin(min);
    setSec(sec);
}

void Time ::setHour(int hour)
{
    if (hour < 0 || hour > 23)
        hour = 0;
    else
        this->hour = hour;
}

void Time ::setMin(int min)
{
    if (min < 0 || min > 59)
        min = 0;
    else
        this->min = min;
}

void Time ::setSec(int sec)
{
    if (sec < 0 || sec > 59)
        sec = 0;
    else
        this->sec = sec;
}

// opearator overloading

Time Time::operator++()
{
    sec++;
    if (sec == 60)
    {
        sec = 0;
        min++;
    }

    if (min == 60)
    {
        hour++;
        min = 0;
    }

    if (hour == 24)
    {
        hour = 0;
    }

    return Time(*this); // mistake //// Return the current object
}

// show()
void Time::standardDisplay() const
{
    cout << (hour > 12 ? hour - 12 : hour);
    cout << ":" << min << ":" << sec;
    cout << (hour >= 12 ? " PM" : " AM");
}

void Time ::militaryDisplay() const
{
    cout << hour << ":" << min << ":" << sec;
}