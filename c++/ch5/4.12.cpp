#include <iostream>
using namespace std;
struct fraction {
	int numerator;
	int denominator;
};
fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);
fraction result;
int main()
{
	fraction f1, f2,result;
	char sign,op,ch;
	do
	{
		cout << "enter first fraction then operator and second fraction \n";
		cin >> f1.numerator >> sign >> f1.denominator >> op >> f2.numerator >> sign >> f2.denominator;
		switch (op)
		{
		case '+':
			result = fadd(f1, f2);
			cout << result.numerator << '/' << result.denominator;
			if (result.numerator == result.denominator)
				cout <<"=\t" << 1;
			else if (result.denominator == 0)
				cout << "invalid value !";
			break;
		case '-':
			result = fsub(f1, f2);
			cout << result.numerator << '/' << result.denominator;
			if (result.numerator == result.denominator)
				cout << "  =\t" << 1;
			else if (result.denominator == 0)
				cout << "invalid value !";
			break;
		case '*':
			result = fmul(f1, f2);
			cout << result.numerator << '/' << result.denominator;
			if (result.numerator == result.denominator)
				cout << "  =\t" << 1;
			else if (result.denominator == 0)
				cout << "invalid value !";
			break;
		case '/':
			result = fdiv(f1, f2);
			cout << result.numerator << '/' << result.denominator;
			if (result.numerator == result.denominator)
				cout << "  =\t" << 1;
			else if (result.denominator == 0)
				cout << "invalid value !";
			break;
		default:
			cout << "something wrong with the format !";
			break;
		}
		cout << "\nDo you want to continue (y/n): ";
		cin >> ch;
	} while (ch!='n');
	return 0;
}
fraction fadd(fraction f1, fraction f2)
{
	result.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;
	return result;
}
fraction fsub(fraction f1, fraction f2)
{
	result.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;
	return result;
}
fraction fmul(fraction f1, fraction f2)
{
	result.numerator = f1.numerator * f2.numerator;
	result.denominator = f1.denominator * f2.denominator;
	return result;
}
fraction fdiv(fraction f1, fraction f2)
{
	result.numerator = f1.numerator * f2.denominator;
	result.denominator = f2.denominator + f1.denominator;
	return result;
