#include<iostream>
using namespace std;

class Op
{
	int a,b;
	
	public :
		void set()
		{
			cout << "Enter a : ";
			cin  >> a;
			
			cout << "Enter b : ";
			cin  >> b;
		}
		
		void get()
		{
			cout << "a = " << a << endl << "b = " << b;
		}
		
		Op operator<(Op &o2)
		{
			int x,y;
			Op temp;
		
		// for a attributes
			if(this->a>o2.a)
			{
				x = this->a;
			}	
			else
			{
				x = o2.a;
			}
		
			if(this->b>o2.b)
			{
				y = this->b;
			}	
			else
			{
				y = o2.b;
			}
			
			temp.a = x;
			temp.b = y;
			
			return temp;
		}
};

int main()
{
	Op o1,o2,o3;
	
	o1.set();
	o2.set();
	
	o3 = o1 < o2;
	
	o3.get();
	
	
}