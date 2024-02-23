#include <iostream>
using namespace std;
int main()
{
    string pass;

    cout << "Enter your password: ";
    cin  >> pass;
    
    cout << endl;

    bool valid = false;

    for (char ch : pass)
	{
        if (ch >= 'A' && ch <= 'Z')
		{
			valid = true;
        }
    }

    try
    {
    	if (valid)
		{
       		cout << "Password is valid." << endl;
    	}
    	
    	throw pass;
    	
	}
	catch(...)
	{
		cout << "Error!... Password must contain at least one uppercase letter.";
	}
	
    return 0;
}
