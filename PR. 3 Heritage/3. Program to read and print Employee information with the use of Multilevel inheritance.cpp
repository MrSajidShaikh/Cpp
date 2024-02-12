#include<iostream>
using namespace std;

class A
{
	protected :
		int id;
		string name,role;
	
	public :	
		void set1()
		{
			cout << "Enter Id : ";
			cin  >> id;
			cin.ignore();
			
			cout << "Enter name : ";
			getline(cin,name);
			
			cout << "Enter Role : ";
			getline(cin,role);
		}
};

class B : public A
{
	protected :
		int salary,exp;
		
	public :
		void set2()
		{
			set1();
			cout << "Enter Salary : ";
			cin  >> salary;
			cout << "Enter Experience (in years) : ";
			cin  >> exp;
		}
};


class C : public B
{
	protected :
		string comp_name,address;
		
	public :
		void set3()
		{
			set2();
			cin.ignore();
			
			cout << "Enter Company's Name : ";
			getline(cin,comp_name);
			
			cout << "Enter company's Address : ";
			getline(cin,address);
		}
		void get1()
		{
			cout << "Name : " << name << endl;
			cout << "Role : " << role << endl;
			cout << "Salary : " << salary << endl;
		}
};

class D : public C
{
	protected :
		long long contact;
		string email;
	
	public :
		void set4()
		{
			set3();
			cout<<"Enter email : ";
			getline(cin,email);
			cout<<"Enter Contact : ";
			cin>>contact;
			cin.ignore();
			
			cout << endl;

		}
		void get()
		{
			cout << "Id : " << id << endl;
			get1();
			cout << "Experience (in years) : " << exp << endl;
			cout << "Company's Name : " << comp_name << endl;
			cout << "Company's Address : " << address << endl;
			cout << "Email : " << email << endl;
			cout << "Conatct : " << contact << endl;
			
		}
		
};

int main()
{
	D d1;
	
	d1.set4();
	d1.get();

}