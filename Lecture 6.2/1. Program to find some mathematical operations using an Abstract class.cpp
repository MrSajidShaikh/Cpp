#include<iostream>
using namespace std;
class Shape
{
	protected :
		int radius,length,base,height,width;
		float pie = 3.14;
	public :
		virtual void calculate() = 0;
};
class Circle : public Shape
{
	public : 
	void calculate()
	{
		cout << "      Area of Circle : " << endl << endl;
		
		cout << "Enter radius of the circle : ";
		cin  >> radius;
	}
	void circle()
	{
		cout << "Area of circle is : " << pie * radius * radius;
	}
};
class Triangle : public Shape
{
	public : 
	void calculate()
	{
		cout << endl << endl << "      Area of Triangle : " << endl << endl;
		
		cout << "Enter base : ";
		cin  >> base;
		
		cout << "Enter height : ";
		cin  >> height;
	}
	void triangle()
	{
		cout << "Area of triangle is : " << (base*height)/2 << endl;
	}
};
class Rectangle : public Shape
{
	public : 
	void calculate()
	{
		cout << endl << endl << "      Area of Rectangle : " << endl << endl;
		
		cout << "Enter length : ";
		cin  >> length;
		
		cout << "Enter width : ";
		cin  >> width;
	}
	void rectangle()
	{
		cout << "Area of rectangle is : " << length * width << endl;
	}
};
int main()
{
	Circle c1;
	c1.calculate();
	c1.circle();
	
	Triangle t1;
	t1.calculate();
	t1.triangle();
	
	Rectangle r1;
	r1.calculate();
	r1.rectangle();
}