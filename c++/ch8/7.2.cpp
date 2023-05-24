

//code is right but after arry v8 it dosent recive c string in constructor or function 
#include <iostream>
#include<string>
using namespace std;
int const MAX = 70;

class String
{
private:
    enum {MAX = 80};
    char s[MAX];
public :
    String()
    {
        strcpy(s, "");
    }
    String(char str[])
    {
        strcpy(s, str);
    }
   void set_string(char str[])
   {
       strcpy( s,str);
   }
    void operator += (char str[]);
};
 void String::operator+=(char str [])
{
     if (strlen(s) + strlen(str) < MAX)
         strcat(s, str);
     else
         cout << "the String is overflow ! ";
}

int main()
{
    String s1; 
    s1.set_string("asdasdad");

    return 0;
}