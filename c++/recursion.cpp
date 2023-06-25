#include<iostream>
#define PI =3.14;
using namespace std;
int arr[10];
int factorial(int n)
{
	if (n > 0)
	{
		return factorial(n - 1) * n;
	}
	else
		return 1;
}
int Ifactorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}
int nCr(int n, int r)
{
	int num, den;
	num = factorial(n);
	den = factorial(r) * factorial(n - r);
	return num / den;
}
int NCR_pascal_t(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return NCR_pascal_t(n - 1, r - 1) + NCR_pascal_t(n - 1, r);
}
int power(int m, int n)
{
	if (n == 0)
		return 1;
	return power(m,n - 1) * m;
}
int powerf(int m, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return powerf(m * m, n / 2);
	else
		return m * powerf(m * m, (n-1) / 2);

}
int powerI(int m, int n)
{
	int x=1;
	for (int i = 0; i < n; i++)
		x *= m;
	return x;
}
int powerIf(int m, int n)
{
	int x = 1;
	while (n > 0)
	{
		if (n % 2 == 0) 
		{
			m = m * m;
			n = n / 2;
		}
		else 
		{
			n = (n -1)/ 2;
			m = m * m;

			x *= m;
		}
	}
	return x;
}
double e(int x, int n)
{
	static double s ;
	if (n == 0)
		return s;
	s = 1 + x * s / n;
	return e(x, n - 1);
}
int fibr(int n)
{
	if (n <= 1)
		return n;
	return fibr(n - 1) + fibr(n - 2);
}
int fibi(int n)
{
	int term1=1, term0=0,s=0;
	if (n <= 1)
		return n;
	for (int i = 2; i <= n; i++)
	{
		s = term1 + term0;
		term0 = term1;
		term1 = s;
	}
	return s;
}
int memofib(int n)
{
	if (n <= 1) {
		arr[n] = n;
		return n;
	}
	else
		if (arr[n - 2] == -1)
			arr[n - 2] == memofib(n - 2);
	if (arr[n - 1] == -1)
		arr[n - 1] == memofib(n - 1);
	arr[n] = arr[n - 2] + arr[n - 1];
	return arr[n - 2] + arr[n - 1];


}
int f(int n)
{

	static int i = 1;

		if(n >= 5)return n;

	n = n + i;

	i++;

	return f(n);

}
void foo(int n, int sum)

{

	int k = 0, j = 0;

	if (n == 0) return;

	k = n % 10;

	j = n / 10;

	sum = sum + k;

	foo(j, sum);
	printf(" % d", k);

}
int f(int& x, int c)

{

	c = c--;
	if (c == 0) return 1;
	x = x + 1;
	return f(x, c) * x;
}
int fun(int n)
{
	int x = 1, k;
	if (n == 1) return x;
	for (k = 1; k < n; ++k)
		x = x + fun(k) * fun(n - k);

	return x;

}
void count(int n)

{

	static int d = 1;

	printf("%d", n);

	printf("%d", d);

	d++;

	if (n > 1) count(n - 1);
	printf("%d", d);

}
struct tringle {
	int length;
	int width;

};
int area(tringle t)
{
	return t.length * t.width;
}
int main()
{
	int A[3][4] = { {1,2,3,4},{2,4,6,8},{1,3,5,7} };
	int* B[3];
	B[0] = new int[4];
	B[1] = new int[4];
	B[2] = new int[4];
	cout << A << " " << (A + 4);
	return 0;
}