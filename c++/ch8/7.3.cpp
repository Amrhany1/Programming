#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minuts;
    int seconds;
public :
    Time() : hours(0), minuts(0), seconds(0)
    {}
    Time(int h, int m, int s) : hours(h), minuts(m), seconds(s)
    {}
    void display()const
    {
        cout << "\n the time is  " << hours << ":" << minuts<<":" << seconds;
    }
    Time operator +  (Time) const;
};
Time Time ::operator+(Time t1) const
{
    int tsec,h=0,m=0,s=0;
    tsec = (hours + t1.hours) * 3600;
    tsec += (minuts + t1.minuts) * 60;
    tsec += seconds + t1.seconds;
    while (tsec >= 3600)
    {
         h++; tsec -= 3600;
    }
    while (tsec >= 60)
    {
        m++; tsec -= 60;
    }
    s = tsec;
    return Time(h, m, s);
}
int main()
{
    Time s1(2,30,20), s2(3,30,0),s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}