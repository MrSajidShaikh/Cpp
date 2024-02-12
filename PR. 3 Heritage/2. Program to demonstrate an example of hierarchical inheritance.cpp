#include<iostream>
using namespace std;

class MATH
{
	protected :
		int a;

	public :
		void input()
		{
			cout << "Enter no.: ";
			cin  >> a;
		}
};
class SQUARE : public MATH
{
	public :
		void get()
		{
			input();
			cout << "Square : "<<a*a;	
		}
};
class CUBE : public MATH
{
	public :
	void get()
	{
		cout<<endl;
		input();
		cout << "Cube : " << a*a*a;
	}	
};

int main()
{
	SQUARE s1;
	CUBE c1;
	
	s1.get();
	c1.get();
}