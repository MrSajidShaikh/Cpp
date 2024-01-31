#include<iostream>
using namespace std;

class Data
{
	int id,age;
	string name,course,city,email,college;
	
	public:
		
	int set()
	{
		cout << "Enter id : ";
		cin  >> id;
		
		cout << "Enter name : ";
		cin  >> name;
		
		cout << "Enter age : ";
		cin  >> age;
		
		cout << "Enter course : ";
		cin  >> course;
		
		cout << "Enter city : ";
		cin  >> city;
		
		cout << "Enter email : ";
		cin  >> email;
		
		cout << "Enter college : ";
		cin  >> college;
		
	}
	
	int get()
	{
		cout << "id : " << id << endl;
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
		cout << "course : " << course << endl;
		cout << "city : " << city << endl;
		cout << "email : " << email << endl;
		cout << "college : " << college << endl;
	}
};

int main()
{
	Data rec[5];
	int i;
	
	for(i=0; i<5; i++)
	{
		cout << "Enter the detail's of " << i+1 << " student." << endl << endl;
		rec[i].set();
		cout << endl;
	}
	
	for(i=0; i<5; i++)
	{
		cout << "detail's of student -  " << i+1. << endl << endl;
		rec[i].get();
		cout << endl;
	}
	
	
}





