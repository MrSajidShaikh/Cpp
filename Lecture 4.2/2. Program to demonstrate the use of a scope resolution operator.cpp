#include<iostream>
using namespace std;

class A
{
	protected :
		int x = 1;
};

class B
{
	protected :
		int x = 2;
};

class C : public A,public B
{
	public :
		void get()
		{
			cout << "Value of X is : " << B::x;
		}
};

int main()
{
	C c1;
	c1.get();
	
	return 0;
}