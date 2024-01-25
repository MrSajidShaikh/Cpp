#include<iostream>
using namespace std;

main()
{
	int a;
	
	cout << "Enter the size of array : " ;
	cin  >>  a;
	
	int b,x[a],i;
	
	cout << endl << "Enter the elements of array : " << endl;
	
	for(i=0; i<=a; i++)
	{
		cout << "a["<< i << "] = ";
		cin  >> x[i];
	}
	
	cout << "Even no. of given array are : ";
	
	for(i=0; i<=a; i++)
	{
		if(x[i]%2==0)
		{
			cout <<" " << x[i];
		}
	}
	
	
}