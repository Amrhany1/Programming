#include <iostream>
#include <stdlib.h>
#include <MATH.H>
using namespace std;
class Money {
private:
    char money[25];
public :
    void set_money()
    {
        cout << "Enter the money that you want : "; cin >> money;
    }
    long double mstold()
    {
       char pm[19];
       char* eptr;
       for (int i = 0,j=0; i < strlen(money); i++)
           if ((money[i] >= 48 && money[i] < 58)||money[i]=='.')
           {
               pm[j] = money[i];
               j++;
           }
       return strtold(pm, &eptr);
    }
};
int main()
{
    long double money;
    Money m;
    m.set_money();
    money=m.mstold();
    printf("%10.2f", money);
    
    return 0;
}