#include <iostream>
using namespace std;
class Distance
{
private :
    int feet;
    float inches;
public :
    Distance(float fltfeet)
    {
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance()
    {}
    Distance(int f,float i):feet(f),inches(i)
    {}

    void showdist() 
    {
        cout << feet << "\' - " << inches << "'\'";
    }
    friend Distance operator *(Distance,Distance);
};
Distance operator * (Distance d1, Distance d2)
{
    int f = d1.feet * d2.feet;
    float i = d1.inches * d2.inches;
    if (i >= 12.0) 
    {
        i -= 12.0; f++;
    }
    return Distance(f, i);
}

int main()
{
    Distance Wdist1;
    Distance dist2(13,11.6);
    Wdist1 = 1.1 * dist2;
   
    Wdist1.showdist();
    
    return 0;
} 