#include<iostream>
using namespace std;
class objcounter
{
private:
	int serial_number;
	static int counter;
public:
	objcounter():serial_number(0)
	{
		counter++;
		serial_number = counter;
	}
	void showserial_obj()
	{
		cout << "I am object number " << serial_number<<endl;
	}
};
int objcounter::counter = 0;
int main()
{
	objcounter obj1, obj2, obj3;
	obj1.showserial_obj();
	obj2.showserial_obj();
	obj3.showserial_obj();
}