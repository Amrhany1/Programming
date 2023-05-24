#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class money
{
private:
	char s[20];
	double Money;
public:
	money() :s(), Money(0)
	{}
	void get_money()
	{
		cout << "enter the amont of money in national debt in dollars and cents preceded by dollar sign :\n";
		cin >> s;
	}
	//“$1,234,567,890,123.99”
	//Money = static_cast<long double>(strm[i]);
	/*void mstold()
	{
		int n=strlen(strm);
		int i,t=0;
		for (i = 0; i < n; i++)
		{
			if (!(strm[i] == ','|| strm[i] == '$'|| strm[i] != '.'))
			{
				t++;
			}
		}
		for (i = 0; i < n; i++)
		{
			if (!(strm[i] == ',' || strm[i] == '$'))
			{
				Money = pow(10, t) + static_cast<int>(strm[i]);
				--t;
			}

		}
	}

};*/
	void mstold()
	{
		long double sum = 0;
		int p;
		for (int i = 1; i < strlen(s); i++)
		{
			if (48 <= static_cast<int>(s[i]) && static_cast<int>(s[i]) <= 57)
				sum = sum * 10 + static_cast<int>(s[i]) - 48;
			else if (s[i] == '.')
				p = i;
		}
		long double frac_part = pow(10, strlen(s) - 1 - p);
		sum /= frac_part;
		cout << "\n" << sum;
	}
};
	int main()
	{
		money m;
		m.get_money();
		m.mstold();
		cout << "the money you entered is : ";
		 m.mstold();
		return 0;
	}