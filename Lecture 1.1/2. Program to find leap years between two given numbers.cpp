#include<iostream>
using namespace std;

main()
{
	int x,y;
	
	cout << "Enter the year : ";
	cin  >> x;
	
	cout << "Enter the year : ";
	cin  >> y;
	
	int a[y],i;
	
	cout << "The array is : ";
	
	for(i=0; i<=y; i++)
	{
		if(a[i]%4==0)
		{
			cout << a[y];
		}
	}

}