#include<iostream>
using namespace std;

class Eligibility
{
	protected :
		int age;
		
	public :
		
		void Age()
		{
			cout << "Enter age : ";
			cin  >> age;
			
			try
			{
				if(age<18)
				{
					throw 0;
				}
				else
				{
					cout << "You are eligible to vote.";
				}
			}
			catch(...)
			{
				cout << "You are not eligible to vote....!";
			}
		}
};
main()
{
	Eligibility E1;
	
	E1.Age();
}