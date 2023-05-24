#include <iostream>
using namespace std;
enum etype { laborar, secretary, manger, accountant, excutive, researcher };
struct date
{
	int day;
	int month;
	int year;
};
struct employee 
{
	int number;
	float compensation;
	etype title;
	date time;
};
int main()
{
	employee employee1, employee2, employee3;
	char ch;
	cout << "Enter employee number then employee compensation \n ";
	cin >> employee1.number >> employee1.compensation;
	cout << "Enter employee type (first letter only) laborar, secretary, manger, accountant, excutive, researcher : ";
	cin >> ch;
	cout << "Enter your first date of employment ";
	cin >> employee1.time.day >> employee1.time.month >> employee1.time.year;
	switch (ch)
	{
	case 'l':
		employee1.title = laborar;
		break;
	case 's':
		employee1.title = secretary;
		break;
	case 'm':
		employee1.title = manger;
		break;
	case 'a':
		employee1.title = accountant;
		break;
	case'e':
		employee1.title = excutive;
		break;
	case'r':
		employee1.title = researcher;
		break;
	}
	cout << "Enter employee number then employee compensation \n ";
	cin >> employee2.number >> employee2.compensation;
	cout << "Enter employee type (first letter only) laborar, secretary, manger, accountant, excutive, researcher : ";
	cin >> ch;
	cout << "Enter your first date of employment ";
	cin >> employee2.time.day >> employee2.time.month >> employee2.time.year;
	switch (ch)
	{
	case 'l':
		employee2.title = laborar;
		break;
	case 's':
		employee2.title = secretary;
		break;
	case 'm':
		employee2.title = manger;
		break;
	case 'a':
		employee2.title = accountant;
		break;
	case'e':
		employee2.title = excutive;
		break;
	case'r':
		employee2.title = researcher;
		break;
	}
	cout << "Enter employee number then employee compensation \n ";
	cin >> employee3.number >> employee3.compensation;
	cout << "Enter employee type (first letter only) laborar, secretary, manger, accountant, excutive, researcher : ";
	cin >> ch;
	cout << "Enter your first date of employment ";
	cin >> employee3.time.day >> employee3.time.month >> employee3.time.year;
	switch (ch)
	{
	case 'l':
		employee3.title = laborar;
		break;
	case 's':
		employee3.title = secretary;
		break;
	case 'm':
		employee3.title = manger;
		break;
	case 'a':
		employee3.title = accountant;
		break;
	case'e':
		employee3.title = excutive;
		break;
	case'r':
		employee3.title = researcher;
		break;
	}
	cout << "the employee number : " << employee1.number << "\t employee compensation : " << employee1.compensation<<"\n";
	switch (employee1.title)
	{
	case 0:
		cout << "Employee type is laborar";
		break;
	case 1:
		cout << "Employee type is secretar";
		break;
	case 2:
		cout << "Employee type is manger";
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
	cout << "\nfisrt employment date is : " << employee1.time.day << "\\" << employee1.time.month << "\\" << employee1.time.year;
	cout << "the employee number : " << employee2.number << "\t employee compensation : " << employee2.compensation << "\n";
	switch (employee2.title)
	{
	case 0:
		cout << "Employee type is laborar";
		break;
	case 1:
		cout << "Employee type is secretar";
		break;
	case 2:
		cout << "Employee type is manger";
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
	cout << "\nfisrt employment date is : " << employee2.time.day << "\\" << employee2.time.month << "\\" << employee2.time.year;

	cout << "the employee number : " << employee3.number << "\t employee compensation : " << employee3.compensation << "\n";
	switch (employee3.title)
	{
	case 0:
		cout << "Employee type is laborar";
		break;
	case 1:
		cout << "Employee type is secretar";
		break;
	case 2:
		cout << "Employee type is manger";
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
	cout << "\nfisrt employment date is : " << employee3.time.day << "\\" << employee3.time.month << "\\" << employee3.time.year;
	return 0;
}