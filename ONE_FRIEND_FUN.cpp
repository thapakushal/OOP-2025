// 1. wap to create a single class with private data members and add them using friend function 

#include<iostream>
using namespace std;
class sample 
{
	private:
		int a,b;
	public:
		void setvalue(int x,int y)
		{
			a = x;
			b = y;
		}
		
		void display()
		{
			cout<<"Value of a = "<<a<<endl;
			cout<<"Value of b = "<<b<<endl;
		}
		friend void sum(sample s);
};
void sum(sample s)
{
	int r;
	r = s.a + s.b;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	sample s1;
	s1.setvalue(5,10);
	s1.display();
	sum(s1);
	return 0;
}
