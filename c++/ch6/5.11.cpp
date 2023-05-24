#include<iostream>
#include<cmath>
using namespace std;
class fraction
{
private:
	int num;
	int den;
public:
	fraction() :num(), den()
	{}
	fraction(int up, int down) :num(up), den(down)
	{}
	void getfraction()
	{
		char sign = '/';
		cout << "enter a fraction : "; cin >> num >> sign >> den;
	}
	void showfraction()const
	{
		cout << num << '/' << den;
	}
	void addfraction(fraction f1, fraction f2);
	void subfraction(fraction f1, fraction f2);
	void multifraction(fraction f1, fraction f2);
	void dividefraction(fraction f1, fraction f2);
	void lowterms();
};
void fraction::addfraction(fraction f1, fraction f2)
{
	num = f1.num * f2.den + f1.den * f2.num;
	den = f1.den * f2.den;
	if (den == 0)
		cout << "invalid value !" << endl;
}
void fraction::subfraction(fraction f1, fraction f2)
{
	num = f1.num * f2.den - f1.den * f2.num;
	den = f1.den * f2.den;
	if (den == 0)
		cout << "invalid value !" << endl;
}
void fraction::multifraction(fraction f1, fraction f2)
{
	num = f1.num * f2.num;
	den = f1.den * f2.den;
	if (den == 0)
		cout << "invalid value !" << endl;
}
void fraction::dividefraction(fraction f1, fraction f2)
{
	num = f1.num * f2.den;
	den = f1.den * f2.num;
	if (den == 0)
		cout << "invalid value !" << endl;
}
void fraction::lowterms()
{
	int tnum, tden, temp, gcd;
	tnum = abs(num);
	tden = abs(den);
	if (tden == 0)
	{
		cout << "illegel fraction: division by 0"; exit(1);
	}
	else if (tnum == 0)
	{
		num = 0; den = 1; return;
	}
	while (tnum!=0)
	{
		if (tnum < tden)
		{
			temp = tnum; tnum = tden; tden = temp;
		}
		tnum = tnum - tden;
	}
	gcd = tden;
	num = num / gcd;
	den = den / gcd;
}
int main()
{
	fraction f, f1, f2;
	char sign,y_n;
	do {
		f1.getfraction();
		cin >> sign;
		switch (sign)
		{
		case '+':
			f2.getfraction();
			f.addfraction(f1, f2);
			break;
		case'-':
			f2.getfraction();
			f.subfraction(f1, f2);
			break;
		case'*':
			f2.getfraction();
			f.multifraction(f1, f2);
			break;
		case'/':
			f2.getfraction();
			f.dividefraction(f1, f2);

			break;
		default:
			cout << "undefined operation !";
		}
		f.lowterms();
		f.showfraction();
		cout << "\nDo you want to continue (y/n) : ";
		cin >> y_n;
	} while (y_n!='n');
	return 0;
}