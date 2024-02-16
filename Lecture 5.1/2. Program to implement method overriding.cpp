#include<iostream>
using namespace std;
class Cricket
{
	protected :
		int over;
		
};
class T20Match : public Cricket
{
	public :
		
		void getTotalOvers(int over)
		{
			this->over = over;
			 
			cout << "T20Match : " << over << " overs." << endl;
		}
};
class ODIMatch : public Cricket 
{
	public :
		
	void getTotalOvers(int over)
	{
		this->over = over;
		
		cout << "ODIMatch : " << over << " overs." << endl;
	}
};
int main()
{
	ODIMatch o1;
	T20Match t1;
	
	o1.getTotalOvers(50);
	t1.getTotalOvers(20);
}