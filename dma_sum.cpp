// 2. WAP to find the sum of n numbers entered by using Dynamic Memory allocation in c++

#include<iostream>
using namespace std;
class sample{
	private:
		int size;
		int *ptr;
	public: 
	sample(int s)
	{
		size = s;
		ptr = new int[size];
	}
	void input()
	{
		cout<<"Enter the values : "<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>ptr[i];
		}
	}
		void output()
		{
			cout<<"The values entered by user are: "<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<ptr[i]<<endl;
			}
		}
		// new function to calculate sum 
		int calculateSum(){
			int sum = 0;
			for(int i=0;i<size;i++)
			{
				sum+=ptr[i];
			}
			return sum;
		}
		
		~sample()
		{
			delete[] ptr;
		}
};
int main()
{
	sample s1(5);
	sample s2(10);
	s1.input();
	s1.output();
	cout<<"Sum of values s1 = "<<s1.calculateSum()<<endl;
	
	s2.input();
	s2.output();
	cout<<"Sum of values s2 = "<<s2.calculateSum()<<endl;
	return 0;
}
