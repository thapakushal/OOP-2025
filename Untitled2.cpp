// create a class person with data members name, age, address and citizenship number. 
// write a constructor to initialize the value of the person. Assign citizenship 
// number if the age of the person is greater than 16 otherwise assign zero to 
// citizenship number. Also create a function to display values. 

#include<iostream>
#include<string.h>
using namespace std;

class Person{
	private:
	char name[20];
	int age;
	char address[20];
	long int citizen_no;
	public:
		Person(char name[],int age,char address[],long int citizen_no){
			Strcyp(name,name);
			age = age;
			address = address;
			citizen_no = citizen_no;
		}
		void display()
		{
			cout<<"Name of the person : "<<name<<endl;
			if(age>=16){
				cout<<"Age of the person : "<<age<<endl;
			}
			else if
			{
				age = 0;
				cout<<"Age of the person : "<<age<<endl;
			}
		
			cout<<"Address of the person : "<<address<<endl;
			cout>>"Citizenship Number of the person : "<<citizen_no<<endl;
	
		}
};
int main()
{
	char name[20];
	int age;
	char address[20];
	long int citizen_no;
	cout<<"Enter Your Name:"<<endl;
	cin>>name;
	cout<<"Enter Your Age:"<<endl;
	cin>>age;
	cout<<"Enter your Address:"<<endl;
	cin>>address;
	cout<<"Enter your citizen_no:"<<endl;
	cin>>citizen_no;
	
	Person p1(name,age,address,citizen_no)
	
	
}
