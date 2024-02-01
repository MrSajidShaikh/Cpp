#include<iostream>
using namespace std;
class Hotel
{
	int id,staff_quantity,room_quantity,year,rating;
	static string name;
	string type,city;
	
	
	public:
		
	void set()
	{
		cout << "Enter hotel's id : ";
		cin  >> id;
		cin.ignore();
		
		cout << "Enter hotel's type (like hotel or motel) : ";
		getline(cin,type);
		
		cout << "Enter hotel's rating : ";
		cin  >> rating;
		cin.ignore();
		
		cout << "Enter hotel's location : ";
		getline(cin,city);
		
		cout << "Enter hotel's established year : ";
		cin  >> year;
		cin.ignore();
		
		cout << "Enter hotel staff's quantity : ";
		cin  >> staff_quantity;
		cin.ignore();
		
		cout << "Enter hotel room's quantity : ";
		cin  >> room_quantity;
		cin.ignore();
	}
	
	void get()
	{
		cout << "hotel's name : " << name <<  endl;
		cout << "Hotel's type : " << type << endl;
		cout << "Hotel's rating : " << rating << endl;
		cout << "Hotel's location : " << city << endl;
		cout << "Hotel's establishment year : " << year << endl;
		cout << "Hotel's staff quantity : " << staff_quantity << endl;
		cout << "Hotel's room quantity : " << room_quantity << endl;
		
		
	}
};

	string Hotel :: name = "Hotel Midnight" ;
	
int main()
{
	Hotel h[3];
	for(int i=0; i<3; i++)
	{
		h[i].set();
		cout << endl << endl;
	}
	
	for(int i=0; i<3; i++)
	{
		cout << "detail's of Hotel/motel -  " << i+1. << endl << endl;
		h[i].get();
		cout << endl << endl;
	}
}