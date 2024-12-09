#include <iostream>
using namespace std;

class Time
{

private:
    int hour, min, sec;

public:
    Time(int hour = 0, int min = 0, int sec = 0); // constructor with default values
    Time(const Time &);                           // copy constructor

    // methods
    void setTime(int hour, int min, int sec);
    void setHour(int hour);
    void setMin(int min);
    void setSec(int sec);

    // operator overloading operator++()
    Time operator++();

    // show functions
    void standardDisplay() const;
    void militaryDisplay() const;
};