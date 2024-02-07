#include<iostream>
using namespace std;
class P
{
	protected :
		float temp;
		
};
class Q : public P
{
	protected :
		float Fahrenheit;
		
	public :
	
		void ToFahrenheit()
		{
			cout << "Enter the value of tempreature in celcius : ";
			cin  >> temp;
			
			Fahrenheit = (temp * 9/5) + 32 ;
		
			cout << "Tempreature in Fahrenheit is : " << Fahrenheit << endl;
		}
};

class R : public Q
{
	protected :
		
		float kelvin;
		
	public :
		
	void ToKelvin()
		{
			
			kelvin = (Fahrenheit - 32) * 5/9 +273.15;
		
			cout << "Tempreature in Kelvin is : " << kelvin << endl;
		}
};

int main()
{
	R r1;
	
	r1.ToFahrenheit();
	r1.ToKelvin();
}