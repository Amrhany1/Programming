#include <iostream>
using namespace std;
class sales
{
private:
    float threem[3];
public:
    void  getdata()
    {
        for (int i = 0; i < 3; i++) {
            cout << "Enter the sales of month (" << i + 1 << ")";
            cin >> threem[i];
        }
        cout <<"\ndone !" << endl;
    }
    void putdata()const
    {
        for (int i = 0; i < 3; i++)
            cout << "Month no (" << i + 1 << ") : $" << threem[i]<<endl;
    }
};
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
class book:public publication,public sales
{
private:
    int pagecount;
public:
    void  getdata()
    {
        publication::getdata();
        cout << "Enter pagecount : "; cin >> pagecount;
        sales::getdata();
    }
    void putdata() const
    {
        publication::putdata();
        cout << "Pagecount : "<<pagecount<<endl;
        sales::putdata();
    }
};
class tape:public publication, public sales
{
private:
    float Tmin;
public :
    void  getdata()
    {
        publication::getdata();
        cout << "Enter Time in minuts : "; cin >> Tmin;
        sales::getdata();
    }
    void putdata() const
    {
        publication::putdata();
        cout << "Time in minuts : " <<Tmin<< endl;
        sales::putdata();
    }
};
enum type { CD, DVD };
class disk : public publication, public sales
{
private :
    type t;
public :
    void  getdata()
    {
        char choic;
        publication::getdata();
        cout << "choose between the CD(c) or DVD(d) ";
        cin >> choic;
        choic == 'd' ? t = DVD : t = CD;
        sales::getdata();
    }
    void putdata() const
    {
        publication::putdata();
        cout << "Type : ";
        t == 0 ? cout << "CD\n" : cout << "DVD\n";
        sales::putdata();
    }
};

int main()
{
    tape t1;
    book b1;
    disk d1;
   /* t1.getdata();
    b1.getdata();
    t1.putdata();
    b1.putdata();*/
    d1.getdata();
    d1.putdata();


    return 0;
}