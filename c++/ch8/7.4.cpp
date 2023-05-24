#include <iostream>
using namespace std;
class Int {
private:
    int value;
public :
    Int() : value(0)
    {}
    Int(int i) :value(i)
    {}
    int get_value()
    {
        return value;
    }
    Int operator + (Int n2)const;
    Int operator - (Int n2)const;
    Int operator * (Int n2)const;
    Int operator / (Int n2)const;
};

int main()
{
    Int i1=200000000, i2=2000000000;
    //i1 + i2;
    i2* i1;
        
        
        return 0;
}

Int Int::operator+(Int n2) const
{
    if (value+n2.value>INT_MAX&& value + n2.value>INT_MIN)
    return Int(value + n2.value);
    else
    {
        cout << "error exceed the limits ! ";
        exit(0);
    }
}

Int Int::operator-(Int n2) const
{
    if (value - n2.value > INT_MAX && value - n2.value > INT_MIN)
        return Int(value - n2.value);
    else
    {
        cout << "error exceed the limits ! ";
        exit(0);
    }
}

Int Int::operator*(Int n2) const
{
    if (value * n2.value > INT_MAX && value * n2.value > INT_MIN)
        return Int(value * n2.value);
    else
    {
        cout << "error exceed the limits ! ";
        exit(0);
    }
}

Int Int::operator/(Int n2) const
{
    if (value / n2.value > INT_MAX && value / n2.value > INT_MIN)
        return Int(value / n2.value);
    else
    {
        cout << "error exceed the limits ! ";
        exit(0);
    }
}