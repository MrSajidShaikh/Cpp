#include<iostream>
using namespace std;
static string comp_name = "A To Z COMPANY";
class Admin
{
	protected :
		int manager_salary = 100000,emp_salary = 10000,total_annual_revenue = 5000000,total_staff = 850;
		string can_terminate;
	
	public :
		void MyAccess()
		{
			cout << "Admin :" << endl;
			cout << "Company's Name : " << comp_name << endl;
			cout << "Total staff : " << total_staff << endl;
			cout << "Manager's Salary : " << manager_salary << endl;
			cout << "Employee's Salary : " << emp_salary << endl << endl;
		}
};

class Manager : public Admin
{
	public :
		void MyAccess()
		{
			cout << "Manager : " << endl;
			cout << "Company's Name : " << comp_name << endl;
			cout << "Total staff : " << total_staff << endl;
			cout << "Manager's Salary :" << manager_salary << endl << endl;
		}
};

class Employee : public Manager
{		
	public :
		void MyAccess()
		{
			cout << "Emp : " << endl;
			cout << "Company Name : " << comp_name << endl;
			cout << "Total staff : " << total_staff << endl;
			cout << "Employee's Salary : " << emp_salary << endl;
		}
};

main()
{
	Admin a1;
	a1.MyAccess();
	
	Manager m1;
	m1.MyAccess();
	
	Employee e1;
	e1.MyAccess();
	
};