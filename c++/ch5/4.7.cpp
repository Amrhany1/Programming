#include <iostream>
using namespace std;
double power(double, int);
double power(int, int);
double power(char, int);
double power(float, int);
double power(long, int);

int main()
{
	int intn,p;
	float floatn;
	double doublen,result;
	char charn;
	long longn;
	cout << "enter the double number and then power :\n ";
	cin >> doublen >> p;
	result = power(doublen, p);
	cout << result<<endl;
	cout << "enter the int number and then power :\n ";
	cin >> intn >> p;
	result = power(intn, p);
	cout << result << endl;
	cout << "enter the char number and then power :\n ";
	cin >> charn >> p;
	result = power(charn, p);
	cout << result << endl;
	cout << "enter the float number and then power :\n ";
	cin >> floatn >> p;
	result = power(floatn, p);
	cout << result << endl;
	cout << "enter the long number and then power :\n ";
	cin >> longn >> p;
	result = power(longn, p);
	cout << result << endl;
	return 0;
}
double power(double n, int p)
{
	double r=0;
	double nsum =n;
	for (int i = 1; i < p; i++)
	{
		r = (nsum * n);
		nsum = r;
	}
	return r;
}
double power(int n, int p)
{
	double r=0;
	int nsum = n;
	for (int i =1; i < p; i++)
	{
		r = (nsum * n);
		nsum = r;
	}
	return r;
}
double power(char n, int p)
{
	double r=0;
	char nsum = n;
	for (int i = 1; i < p; i++)
	{
		r = (nsum * n);
		nsum = r;
	}
	return r;
}
double power(float n, int p)
{
	double r=0;
	float nsum = n;
	for (int i = 1; i < p; i++)
	{
		r = (nsum * n);
		nsum = r;
	}
	return r;
}
double power(long n, int p)
{
	double r=0;
	long nsum = n;
	for (int i = 1; i < p; i++)
	{
		r =( nsum * n);
		nsum = r;
	}
	return r;
}
