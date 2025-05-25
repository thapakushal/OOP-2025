// 3. wap to add private data member of three different classes using friend function 


#include<iostream>
using namespace std;
class B;
class C;
class A
{
	private:
	int x;
	public:
	void setdata(int num)
	{
		x = num;
	}
	friend void sum(A m,B n, C o);
	
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
	friend void sum(A m,B n,C o);
};
class C
{
	private:
	int z;
	public:
		void setdata(int num)
		{
			z = num;
		}
	friend void sum(A m,B n,C o);
};
void sum(A m,B n,C o)
{
	int r;
	r = m.x + n.y + o.z;
	cout<<"Sum = "<<r<<endl;
}
int main()
{
	A p;
	B q;
	C r;
	p.setdata(10);
	q.setdata(20);
	r.setdata(30); 
	sum(p,q,r);
	return 0;
}
