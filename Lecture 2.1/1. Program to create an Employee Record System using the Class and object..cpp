#include<iostream>
using namespace std;

class Details
{
	public :
	int id,age,salary,exp;
	string name,role,city,comp_name;
	
	void input()
	{
		cout << "Enter id : ";
		cin  >> id;
		
		cout << "Enter Name : ";
		cin  >> name;
		
		cout << "Enter Age : ";
		cin  >> age;
		
		cout << "Enter Role : ";
		cin  >> role;
		
		cout << "Enter Salary : ";
		cin  >> salary;
		
		cout << "Enter City : ";
		cin  >> city;
		
		cout << "Enter Experience : ";
		cin  >> exp;
		
		cout << "Enter Company Name : ";
		cin  >> comp_name;
		
		cout << endl;
	}
		
	void output()
	{
		cout << "Id : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "Role : " << role << endl;
		cout << "Salary  : " << salary << endl;
		cout << "City : " << city << endl;
		cout << "Experience : " << exp << endl;
		cout << "Company Name : " << comp_name << endl;
	
		cout << endl;
	}	
};

main()
{
	Details emp[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Details of  "<< i+1 << " Employee :\n" << endl;
		emp[i].input();
	}
	
	for(i=0; i<5; i++)
	{
		emp[i].output();
	}
		
}
