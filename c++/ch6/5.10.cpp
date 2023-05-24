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
	angel(int deg, float min, char dir) :degrees(deg), minutes(min), direction(dir)
	{}
	void getangle()
	{
		cout << "enter the degrees : "; cin >> degrees;
		cout << "enter the minutes : "; cin >> minutes;
		cout << "enter the direction : "; cin >> direction;
	}
	void showangel()const
	{
		cout << degrees << '\xF8' << minutes << "\'" << direction << endl;
	}
};
 class ship
 {
	private:
		int serial_number;
		static int counter;
		angel latitude;
		angel longitude;
	public:
		ship() :serial_number(0)
		{
			counter++;
			serial_number = counter;
		}
		void get_position()
		{
			cout << "Enter the latitude first :- \n";
			latitude.getangle();
			cout << "Enter the longitude second :- \n";
			longitude.getangle();
		}
		void show_ship()
		{
			cout << "\nship number : " << serial_number << endl;
			cout << "ship longitude : "; longitude.showangel();
			cout << "ship latitude : "; latitude.showangel();
		}
 };
	int ship::counter = 0;
	int main()
	{
		ship ship1, ship2, ship3;
		ship1.get_position();
		ship2.get_position();
		ship3.get_position();
		ship1.show_ship();
		ship2.show_ship();
		ship3.show_ship();
	
	}