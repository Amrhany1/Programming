#include <iostream>
using namespace std;
class publication
{
private:
    string title;
    float price;
public:
    virtual void getData()
    {
        cout << "Enter the title : ";  cin >> title;
        cout << "Enter the price : "; cin >> price;
    }
    virtual void putData() 
    {
        cout << "the title is : " << title<<endl;
        cout << "the price is : " << price<<endl;
    }
};
class book : public publication
{
private:
    int pagecount;
public :
    void getData()
    {
        cout << "book" << endl;
        publication::getData();
        cout << "Enter the page count : "; cin >> pagecount;
    }
    void putData()
    {
        publication::putData();
        cout << "the page count is : " << pagecount<<endl;
    }
};
class tape : public publication
{
private:
    float playTime;
    void getData()
    {
        cout << "Tape"<<endl;
        publication::getData();
        cout << "enter the play time : "; cin >> playTime;
    }
    void putData()
    {
        publication::putData();
        cout << "the play time is : " << playTime<<endl;
    }
};
int main()
{
    
    publication* arr[5];
    char c;
    for (int i = 0; i < 5; i++)
    {
        cout << "What do you want to enter (b/t)"; cin >> c;
        switch (c)
        {
        case 'b':
            arr[i] = new book;
            arr[i]->getData();
            break;
        case 't':
            arr[i] = new tape;
            arr[i]->getData();
            break;
        default:
            cout << "undefined input !";
            break;
        }
    }
    cout << "all the data is in arr : -\n";
    for (int i = 0; i < 5; i++)
    {
        arr[i]->putData();
    }
    return 0;
} 