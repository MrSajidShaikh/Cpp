#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout << "Enter your age : ";
	cin  >> age;
	
	try
	{
		if(age>18)
		{
			throw age;
		}
		else
		{
			cout << "you are eligible to vote. ";
		}
	}
	catch(...)
	{
		cout << "You are not eligible to vote. ";
	}
	
	return 0;
}