#include<iostream>
using namespace std;
class X
{
	protected :
		int a,b,c;
		
};
class Y : public X
{
	public :
	
		void SetData()
		{
			cout << "Enter the value of A : ";
			cin  >> a;
			
			cout << "Enter the value of B : ";
			cin  >> b;
			
			cout << "Enter the value of C : ";
			cin  >> c;
			
		}
		
		void GetData()
		{
			int sum = a*a*a + b*b*b + c*c*c ;
			
			cout <<endl << "Sum of all number's cube is : " << sum << endl;
		}
};

int main()
{
	Y y1;
	
	y1.SetData();
	y1.GetData();
}