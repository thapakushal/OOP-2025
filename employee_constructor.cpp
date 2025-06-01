// create a class called employee with 
// data member Code,Name,Address,Salary.
// Create a constructor to initializa the member of the class. 
// Also create the another contructor so that we create and 
// object from another object. 
// Define member function display to display the informatioin 
// of the class 


#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	private:
		int Code;
		char Name[20];
		char Address[20];
		float Salary;
	public:
 		  Employee(int Cod,char nam[],char Addr[],float Sal)
 		  {
 		  	Code = Cod;
 		  	strcpy(Name,nam);
 		  	strcpy(Address,Addr);
 		  	Salary = Sal;
		   }
		   void display()
		   {
		   	cout<<"Code"<<Code<<endl;
		   	cout<<"Name"<<Name<<endl;
		   	cout<<"Address"<<Address<<endl;
		   	cout<<"Salary"<<Salary<<endl;
		   }
};

int main(){
	int code;
	char name[20];
	char address[20];
	float salary;
	cout<<"Enter the Code:"<<endl;
	cin>>code;
	cout<<"Enter the Name:"<<endl;
	cin>>name;
	cout<<"Enter the Address:"<<endl;
	cin>>address;
	cout<<"Enter the Salary:"<<endl;
	cin>>salary;
	Employee e1(code,name,address,salary);
	e1.display();
	
}
