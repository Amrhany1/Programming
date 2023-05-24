#include<iostream>
using namespace std;
class fractions
{
private:
	int numerator;
	int denominator;
public:
	fractions() :numerator(), denominator()
	{}
	void getfraction()
	{
		char sign = '/';
		cout << "enter a fraction : "; cin >> numerator >> sign >> denominator;
	}
	void showfraction()const
	{
		cout << numerator << '/' << denominator;
	}
	void addfraction(fractions f1, fractions f2);
};
void fractions::addfraction(fractions f1, fractions f2)
{
		numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
		denominator = f1.denominator * f2.denominator;
	if (denominator==0)
	      cout << "invalid value !" <<endl;
}
int main()
{
	char y_n;
	fractions f1, f2, f3;
	do
	{
		f1.getfraction();
		f2.getfraction();
		f3.addfraction(f1, f2);
		f3.showfraction();
		cout << "\nDo you want to continue (y/n) : "; cin >> y_n;
	} while (y_n != 'n');
	return 0;
}