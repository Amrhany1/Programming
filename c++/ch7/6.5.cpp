#include<iostream>
#include<cmath>
using namespace std;
class fraction
{
private:
	int num;
	int den;
public:
	fraction() :num(0), den(0)
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
	void lowterms();
	void sumfraction(fraction a,fraction b);
	void div_fraction(fraction f, int divisor);
};
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
	while (tnum != 0)
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
void fraction::sumfraction(fraction a, fraction b)
{
		num = a.num * b.den + a.den * b.num;
		den = a.den * b.den;
}
void fraction::div_fraction(fraction ft, int divisor)
{
	num = ft.num;
    den = ft.den * divisor;
}
int main()
{
	fraction f[100];
	fraction fT, fA;
	int divisor = 1;
	int n = 0;
	char y_n;
	cout << "your limit is 100 fractions ! \n";
	do
	{
		f[n].getfraction();
		++n;
		cout << "Do you want to calculates the avarage now  (y/n) ?";
		cin >> y_n;
	} while (y_n != 'y'&&n<100);
	fT = { 0,1 };
	for (int i = 0; i < n; i++)
	{
		fT.sumfraction(fT, f[i]);
	}
	fA.div_fraction(fT, n);
	fA.lowterms();
	fA.showfraction();
	return 0;
}