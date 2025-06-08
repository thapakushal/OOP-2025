// 3. Write a simple program using of dynamic memory allocation which should include 
// calculation of marks of 3 subjects of n students and displaying the result as 
// pass or fail and name,roll. Pass mark is 45 out of 100 in each subject 

#include<iostream>
using namespace std;
class student
{
	private: 
	char name[20];
	int roll;
	float m1,m2,m3;
	public: 
	void getdata() 
	{
		cout<<"Enter the name: "<<endl;
		cin>>name;
		cout<<"Enter the roll no: "<<endl;
		cin>>roll;
		cout<<"Enter the marks of 3 subjects : "<<endl;
		cin>>m1>>m2>>m3;
	}
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll: "<<roll<<endl;
		if(m1>=45 && m2>=45 && m3>=45)
		{
			cout<<"Result: Pass"<<endl;
		}
		else
		{
			cout<<"Result: Fail"<<endl;
		}
	}
};
int main()
{
	int n,i;
	student *ptr; // pointer that can point to the objects of the student
	cout<<"Enter the number of students: ";
	cin>>n;
	ptr = new student[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the information of student:"<<i+1<<endl;
		ptr[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		cout<<"Information of student :"<<i+1<<endl;
		ptr[i].display();
	}
	delete[] ptr; // memory released  
	return 0;
}
