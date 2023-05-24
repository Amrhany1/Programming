include <iostream>
#include <cmath>
using namespace std;
class Distance
{
private:
    const float MTF;
    int feet;
    float inches;
public:
    Distance() :feet(0), inches(0.0), MTF(3.280833f)
    {}
    Distance(float meters) :MTF(3.280833f)  //convertion constructor 
    {
        float fltfeet = meters * MTF;
        feet = int(fltfeet);
        inches = (fltfeet - feet) * 12;
    }
    Distance(int f, float i) :feet(f), inches(i), MTF(3.280833f)
    {}
    void getdist()
    {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"' << endl;
    }

    operator float()const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }


    Distance operator + (Distance)const;
    bool operator < (Distance)const;
    void operator += (Distance);
    Distance operator - (Distance)const;

};
Distance Distance::operator+(Distance d2)const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}
bool Distance::operator<(Distance d2)const
{
    int f1 = feet + inches / 12;
    int f2 = d2.feet + d2.inches / 12;
    return (f1 < f2) ? true : false;
}
void Distance::operator+= (Distance d2)
{
    feet += d2.feet;
    inches += d2.inches;
    if (inches >= 12.0)
    {
        inches -= 12.0;
        feet++;
    }
}
Distance Distance::operator- (Distance d2)const
{
    int f = abs(feet - d2.feet);
    float i =abs( inches - d2.inches);

    return Distance(f, i);
}
int main()
{
    //Distance dist1, dist3, dist4;
   /* float mtrs;
    Distance dist1 = 2.35f;
    cout << "dist1 = "; dist1.showdist();
    Distance dist2(5, 10.25);*/
    /*  dist3 = dist1 + dist2;
      dist4= dist3 +dist1 + dist2;*/
      /* dist1 += dist2;*/
   /* mtrs = dist2;
    cout << "dist2 = "; dist2.showdist();
    cout << mtrs;*/
    /*cout << "dist3 = "; dist3.showdist();
    cout << "dist4 = "; dist4.showdist();*/
   /* (dist1 < dist2) ? cout << "\ndist1 is less than dist2" : cout << "\ndist1 is greater than dist 2\n";*/

    Distance d1(5, 10.25);
    Distance d2(20, 11.40);
    Distance d3 = d1 - d2;
    d3.showdist();
    return 0;
}