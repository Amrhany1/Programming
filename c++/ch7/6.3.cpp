#include<iostream>
using namespace std;
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(): feet(0),inches(0.0)
	{}
	void getdist()
	{
		cout << "\n   Enter feet : "; cin >> feet;
		cout << "  Enter inches : "; cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	void add_dist(Distance, Distance);
	void div_dist(Distance d2, int divisor);
};
void Distance::add_dist(Distance d2, Distance d3)
{
	inches = d2.inches + d3.inches;
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d3.feet;
}
void Distance::div_dist(Distance d2, int divisor)
{
	float fltfeet = d2.feet + d2.inches / 12.0;
	fltfeet /= divisor;
	feet = int(fltfeet);
	inches = (fltfeet - feet) * 12.0;
}
int main()
{
	Distance dist[100];
	Distance distT,distava;
	int n=0;
	char y_n;
	cout << "your limit is 100 english Distance ! ";
	do
	{
		dist[n].getdist();
		distT.add_dist(dist[n],dist[n+1]);
		++n;
		cout << "Do you want to calculates the avarage now  (y/n) ?";
		if (n == 100)
		{
			cout << "you reached out your limitation ! ";
			break;
		}
		cin >> y_n;
	} while (y_n!='y');
	distava.div_dist(distT, n);
	distava.showdist();
	return 0;
}