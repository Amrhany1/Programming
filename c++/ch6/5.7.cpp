#include<iostream>
using namespace std;
class angel
{
private:
	int degrees;
	float minutes;
	char direction;
public:
	angel() :degrees(), minutes(), direction()
	{}
	angel(int deg ,float min,char dir):degrees(deg),minutes(min),direction(dir)
	{}
	void getangle()
	{
		cout << "enter the degrees : "; cin >> degrees;
		cout << "enter the minutes : "; cin >> minutes;
		cout << "enter the direction : "; cin >> direction;
	}
	void showangel()const
	{
		cout << degrees << '\xF8' << minutes << "\'"  << direction<<endl;
	}
};
int main()
{
	char y_n=0;
	angel a1(30, 20.20f, 'W'),a2;
	a1.showangel();
	do
	{
		a2.getangle();
		a2.showangel();
		cout << "Do you want continue (y/n) ?\n"; cin >> y_n;
	} while (y_n != 'n');
	return 0;
}