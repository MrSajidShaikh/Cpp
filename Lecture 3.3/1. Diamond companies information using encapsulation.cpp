#include<iostream>
using namespace std;

class Diamond
{
	int id,staff_quantity,revenue,imp_diamond,exp_diamond;
	string comp_name,ceo_name;
	
	public :
		
		void set()
		{
			cout << "Enter id : ";
			cin  >> id;
			cin.ignore();
			
			cout << "Enter company's name : ";
			getline(cin,comp_name);
			
			cout << "Enter staff's quantity : ";
			cin  >> staff_quantity;
			cin.ignore();
			
			cout << "Enter company's revenue (per year) : ";
			cin  >> revenue;
			cin.ignore();
			
			cout << "Enter no.of diamond imported per year : ";
			cin  >> imp_diamond;
			cin.ignore();
			
			cout << "Enter no.of diamond exported per year : ";
			cin  >> exp_diamond;
			cin.ignore();
			
			cout << "Enter company's CEO name : ";
			getline(cin,ceo_name);
		}
		
		void get()
		{
			cout << "id : " << id << endl;
			cout << "company's name : " << comp_name << endl;
			cout << "company's revenue : " << revenue << endl;
			cout << "staff's quantity : " << staff_quantity << endl;
			cout << "company's revenue : " << revenue << endl;
			cout << "No.of diamond imported per year : " << imp_diamond << endl;
			cout << "No.of diamond exported per year : " << exp_diamond << endl;
			cout << "company's CEO name : " << ceo_name << endl;
		}
};

int main()
{
	int N;
	
	cout << "Enter No. of companies : ";
	cin  >> N;
	
	cout << endl;
	
	Diamond d[N];
	
	for(int i=0; i<N; i++)
	{
		d[i].set();
		cout << endl;
	}
	
	for(int i=0; i<N; i++)
	{
		d[i].get();
		cout << endl;
	}
}