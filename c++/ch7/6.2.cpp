#include <iostream>
using namespace std;
int const MAX = 100;
class employees
{
private :
	char employee_name[50];
	long employee_number;
public:
	employees() :employee_name(), employee_number()
	{}
	void getdata()
	{
		cout << "\nEnter your Name : ";
		cin >> employee_name;
		cout << "Enter your employee's Number : ";
		cin>>employee_number;
	}
	void putdata() const
	{
		cout << "Employee name is " << employee_name << " and the number is " << employee_number << endl;
	}
};
int main()
{
	employees employee[MAX];
	for (int i = 0; i < MAX; i++)
	{
		employee[i].getdata();
	}
	cout << "Now you exceded the employees number the current employee state :- \n";
	for (int  i = 0; i < MAX; i++)
	{
		employee[i].putdata();
	}
	return 0;
}