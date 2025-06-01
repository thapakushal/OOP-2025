// create a class time constructor having hour, minute and second as an arguments is 
// use to take two time data from user. The add function that takes two class objects an 
//arguments add them respectively then display the aggregate result?
// (apply 60 second = 1 minutes and 60 minutes = 1hour)

#include<iostream>
using namespace std;

class time
{
	private:
		int hour, minute, second;
	public:
		time()
		{
			
		}
		time(int h,int m, int s)
		{
			hour = h;
			minute = m;
			second = s;
		}
		void display()
		{
			cout<<hour<<":"<<minute<<":"<<second<<endl;
		}
		void sum(time t1,time t2)
		{
			second = t1.second + t2.second; 
			minute = second/60;
			second = second % 60;
			minute = minute + t1.minute + t2.minute;
			hour = minute/ 60;
			minute = minute % 60;
			hour = hour + t1.hour + t2.hour;
		}
};

int main()
{
int hr1,min1,sec1,hr2,min2,sec2;
cout<<"Enter the first hour, minute and second"<<endl;
cin>>hr1>>min1>>sec1;
cout<<"Enter the second hour, minute and seconds"<<endl;
cin>>hr2>>min2>>sec2;
time t1(hr1,min1,sec1);
time t2(hr2,min2,sec2);
time t3;
t3.sum(t1,t2);
cout<<"The 1st time is: "<<endl;
t1.display();
cout<<"The 2nd time is: "<<endl;
t2.display();
cout<<"sum of time is: "<<endl;
t3.display();
return 0;

}

