#include<iostream>
using namespace std;

class Operator
{
	int a,b;
	
	public :
		void set()
		{
			cout << "Enter KiloMeter : ";
			cin  >> a;
			
			cout << "Enter Meter : ";
			cin  >> b;
			
			cout << endl;
		}
		
		void get()
		{
			cout << "KiloMeter = " << a << endl << "Meter = " << b;
		}
		
		Operator operator+(Operator &o2)
		{
			int x,y;
			Operator temp;
			
			x = this->a  + o2.a + (this->b/1000) + (o2.b/1000);
			y = this->b%1000 + o2.b%1000;
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};

int main()
{
	Operator o1,o2,o3;
	
	o1.set();
	o2.set();
	
	o3 = o1 + o2;
	
	o3.get();
	
	
}