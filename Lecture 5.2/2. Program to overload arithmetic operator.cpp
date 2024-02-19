#include<iostream>
using namespace std;
class math
{
	int a,b;
	
	public :
		
	void set()
	{
		cout << "Enter A : ";
		cin  >> a;
		
		cout << "Enter B : ";
		cin  >> b;
	}
	void get()
	{
		cout << "A -> " << a << endl;
		cout << "B -> " << b << endl;
	}
	math operator-(math &m1)
	{
		int x,y;
		math temp;
		
		x = this->a  - m1.a;
		y = this->b  - m1.b;
		
		temp.a = x;
		temp.b = y;
		return temp;
	}
	
	
};
int main()
{
	math m1,m2,m3;
	
	m1.set();
	m2.set();
	
	m3 = m1 - m2;
	
	m3.get();
}