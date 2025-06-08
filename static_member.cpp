// 7. write a c++ progam to illustrate the use of static data members and 
// static member funcitons

#include<iostream>
using namespace std;
class test
{
	private: 
	int code;
	static int count;
	public: 
	void setcode()
	{
		code = ++count;
	}
	void showcode()
	{
		count<<"Code = "<<code<<endl;
	}
	static void showcount()
	{
		count<<"count="<<count<<endl;
	}
};
int test::count;
int main()
{
	test t1,t2,t3;
	t1.setcode();
	t2.setcode();
	test::showcount();
	test t3;
	t3.setcode();
	test::showcount();
	t1.showcode();
	t3.showcode();
	return 0;
	
}
