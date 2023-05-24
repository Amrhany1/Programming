#include <iostream>
using namespace std;
class publication 
{
private:
    string title;
    float price;
public :
    void  getdata()
    {
        cout << "Enter title : "; cin >> title;
        cout << "Enter price : "; cin >> price;
    }
    void putdata() const
    {
        cout << "Title : "<<title<<endl;
        cout << "Price : $" << price<<endl;
    }
};
class book:public publication
{
private:
    int pagecount;
public:
    void  getdata()
    {
        publication::getdata();
        cout << "Enter pagecount : "; cin >> pagecount;
    }
    void putdata() const
    {
        publication::putdata();
        cout << "Pagecount : "<<pagecount<<endl;
    }
};
class tape:public publication
{
private:
    float Tmin;
public :
    void  getdata()
    {
        publication::getdata();
        cout << "Enter Time in minuts : "; cin >> Tmin;
    }
    void putdata() const
    {
        publication::putdata();
        cout << "Time in minuts : " <<Tmin<< endl;
    }
};

int main()
{
    tape t1;
    book b1;
    t1.getdata();
    b1.getdata();
    t1.putdata();
    b1.putdata();

    return 0;
}