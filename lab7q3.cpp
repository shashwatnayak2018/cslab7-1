// Write a C++ program to print all even or odd numbers in given range using recursion.
//library
#include<iostream>
//namespace
using namespace std;
//write the function to print numbers with interval 2
int f(int a, int b)
{
	if(a<=b)
	{
		cout<<a<<endl;
		f(a+2,b);
	}
}
int printeven(int a,int b)
{
	if(a%2==0)
	{
		f(a,b);
	}
	else
	{
		f((a+1),b);
	}
}
int printodd(int a,int b)
{
	if(a%2==0)
	{
		f((a+1),b);
	}
	else
	{
		f(a,b);
	}
}
//write main function
int main()
{
	//declaring variables
	int t,a,b;
	//ask for the value of a
	cout<<"Enter the value of the first number of the range:"<<endl;
	cin>>a;
	//ask for the value of b
	cout<<"Enter the value of the last number of the range:"<<endl;
	cin>>b;
	cout<<"Enter 1 for even numbers and enter 0 for odd numbers."<<endl;
	cin>>t;
	if(t==1)
	{
		printeven(a,b);
	}
	if(t==0)
	{
		printodd(a,b);
	}
	else
	{
		cout<<"INVALID OPTION!!"<<endl;
	}
	return 0;
}
