#include<iostream>
using namespace std;

class Divide
{
	protected :
		float x,y;
	public :
		
		void division()
		{
			cout << "Enter x : ";
			cin  >> x;
			
			cout << "Enter y : ";
			cin  >> y;
			
			
			try
			{
				if(y==0)
				{
					throw runtime_error("Denominator can't be zero");
				}
				else
				{
					cout << "x divide by y is " << x/y;
				}
			}
			catch(runtime_error error)
			{
				cout << error.what();
			}
		}
};

main()
{
	Divide d1;
	d1.division();
}
