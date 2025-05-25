// 4. wap to find largest of four integers. 
//your program should have three classes and each classes have one integer number 
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
	friend void largest(A m,B n, C o);
	
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
	friend void largest(A m,B n,C o);
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
	friend void largest(A m,B n,C o);
};
void largest(A m,B n,C o)
{
	int c=2;
	if(m.x>n.y && m.x>o.z && m.x>c) // 10>20 && 10>30 && 10>2
	{
		cout<<"Largest number = "<<m.x<<endl;
	}
   	else if(n.y>o.z && n.y>c) // 20>30 && 20>2
   	{
   		cout<<"Largest number = "<<n.y<<endl;
	}
	else if(o.z>c) // 
	{
		cout<<"Largest number = "<<o.z<<endl;
	}
	else{
		cout<<"Largest number = "<<c<<endl;
	}
}
int main()
{
	A p;
	B q;
	C r;
	p.setdata(10);
	q.setdata(20);
	r.setdata(30); 
	largest(p,q,r);
	return 0;
}
