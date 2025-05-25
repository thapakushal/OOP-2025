// 2. WAP TO ADD PRIVATE DATA OF TWO DIFFERENT CLASSES USING FRIEND FUNCTINO 

#include<iostream>
using namespace std;
class A
{
	private:
	int x;
	public:
	void setdata(int num)
	{
		x = num;
	}
	friend void sum(A m,B n);
	
};
class B
{
	private:
	int y;
	public:
		void setdata(int num)
		{
			y = num;
		}
	friend void sum(A m,B n);
};
void sum(A m,B n)
{
	int r;
	r = m.x + n.y;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	A p;
	B q;
	p.setdata(10);
	q.setdata(20);
	sum(p,q);
	return 0;
}
