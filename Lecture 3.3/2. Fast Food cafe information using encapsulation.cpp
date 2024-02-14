#include<iostream>
using namespace std;

class Cafe
{
	int id,rating,est_year,staff_quantity;
	string name,type,location;
	
	public :
		
		void set()
		{
			cout << "Enter cafe's id : ";
			cin  >> id;
			cin.ignore();
			
			cout << "Enter cafe's name : ";
			getline(cin,name);
			
			cout << "Enter cafe's type (like rooftop or normal) : ";
			getline(cin,type);
			
			cout << "Enter cafe's rating : ";
			cin  >> rating;
			cin.ignore();
			
			cout << "Enter cafe's location : ";
			getline(cin,location);
			
			cout << "Enter cafe's establishement year : ";
			cin  >> est_year;
			cin.ignore();
			
			cout << "Enter cafe's staff quantity : ";
			cin  >> staff_quantity;
			cin.ignore();
		}
		
		void get()
		{
			cout << "cafe's id : " << id << endl;
			cout << "cafe's name : " << name << endl;
			cout << "cafe's type : " << type << endl;
			cout << "cafe's rating : " << rating << endl;
			cout << "cafe's location : " << location << endl;
			cout << "cafe's establishement year : " << est_year << endl;
			cout << "cafe's staff quantity : " << staff_quantity << endl;
		}
};