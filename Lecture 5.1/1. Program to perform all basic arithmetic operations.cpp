#include<iostream>
using namespace std;
class Child
{
	protected :
		int a,b,c,d,e;
		
	public :
		
		void Calculate(int a,int b)
		{
			this->a = a;
			this->b = b;
			cout << "Division : " << this-> a / this->b << endl;
		}
		
		void Calculate(int a,int b,int c)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			
			cout << "Substraction : " << this-> a - this->b - this-> c << endl;
		}
		
		void Calculate(int a,int b,int c,int d)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			
			cout << "multiplication : " << this-> a * this->b * this->c * this->d << endl;
		}
		
		void Calculate(int a,int b,int c,int d,int e)
		{
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->e = e;
			
			cout << "Addition : " << this-> a + this->b + this->c + this->d + this->e << endl;
		}
};
int main()
{
	Child c1;
	
	c1.Calculate(60,30);
	c1.Calculate(100,30,50);
	c1.Calculate(2,4,6,8);
	c1.Calculate(10,20,30,40,50);
}