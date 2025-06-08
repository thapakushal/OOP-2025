// lab 6
// 1. write a program to illustrate the dynamic memory allocation 

#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	ptr = new int; // new operator allocates the memory 
	cout<<"Enter any number: "<<endl;
	cin>>*ptr;
	cout<<"Entered number ="<<ptr<<endl;
	delete ptr;
	return 0;
}
