#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

class Data
{
	int id,age,mob_no,sim_valid,sim_name;
	string name,city;
	
	public:
		
	int set()
	{
		cout << "Enter id : ";
		cin  >> id;
		
		cout << "Enter name : ";
		cin  >> name;
		
		cout << "Enter age : ";
		cin  >> age;
		
		cout << "Enter city : ";
		cin  >> city;
		
		cout << "Enter mobile number : ";
		cin  >> mob_no;
		
		cout << "Enter simcard validity (in years) : ";
		cin  >> sim_valid;
		
		cout << "Enter telecom brand name : ";
		cin  >> sim_name;
		
	}
	
	int get()
	{
		cout << "id : " << id << endl;
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
		cout << "city : " << city << endl;
		cout << "mobile number : " << mob_no << endl;
		cout << "simcard validity : " << sim_valid << endl;
		cout << "telecom brand name : " << sim_name << endl;
	}
};

int main()
{
	Data cust[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Enter the detail's of " << i+1 << " customer." << endl << endl;
		cust[i].set();
		cout << endl;
	}
	
	for(i=0; i<5; i++)
	{
		cout << "detail's of customer -  " << i+1. << endl << endl;
		cust[i].get();
		cout << endl;
	}
	
	
}





