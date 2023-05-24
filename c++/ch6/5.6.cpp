#include <iostream>
using namespace std;
class date
{
private:
	int day, month, year;
	char sign;
public:
	date() :day(), month(), year()
	{}
	void getdate()
	{
		cout << "Enter you first date to work here (dd/mm/yy) : ";
		cin >> day >> sign >> month >> sign >> year;
	}
	void showdate()const
	{
		cout << day << '/' << month << '/' << year<<endl;
	}
};
enum etype{laborer,secretary,manager,accountant,excutive,researcher};
class employee
{
private:
	unsigned int employee_num;
    float employee_salary;
	etype employee_title;
	date employee_date;
	char ch;
public:
	employee() :employee_num(), employee_salary(), employee_title(), employee_date()
    {}
	void getemployee()
	{
		cout << "\nenter employee number : "; cin >> employee_num;
		cout << "enter employee salary : "; cin >> employee_salary;
		cout << "enter first letter from your title : "; cin >> ch;
		employee_date.getdate();
		switch (ch)
		{
		case'l':
			employee_title = laborer;
			break;
		case 's':
			employee_title = secretary;
			break;
		case 'm':
			employee_title = manager;
			break;
		case 'a':
			employee_title = accountant;
			break;
		case'e':
			employee_title = excutive;
			break;
		case'r':
			employee_title = researcher;
			break;
		}
	}
	void putemployee()
	{
		cout << "\nthe employee number : " << employee_num << "\nthe employee salary : " << employee_salary << endl;
		employee_date.showdate();
		switch (employee_title)
		{
		case 0:
			cout << "Employee type is laborer";
			break;
		case 1:
			cout << "Employee type is secretar";
			break;
		case 2:
			cout << "Employee type is manager";
			break;
		case 3:
			cout << "Employee type is accountant";
			break;
		case 4:
			cout << "Employee type is excutive";
			break;
		case 5:
			cout << "Employee type is researcher";
			break;
		}
		cout << endl;
	}
};
int main() 
{
	employee e1, e2, e3;
	e1.getemployee();
	e2.getemployee();
	e3.getemployee();
	e1.putemployee();
	e2.putemployee();
	e3.putemployee();
	return 0;
}