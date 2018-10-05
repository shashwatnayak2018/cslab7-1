//Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
//library
#include<iostream>
//namespace
using namespace std;
//write the function to find sum
int sum(int i,int n)
{
	int s;
	if(i<n)
	{
		 s= i+sum((i+1),n);
	}
	if(i>n)
	{
		return 0;
	}
	return s;
}
//write the main function
int main()
{
	int n,z;
	//ask for the value of n
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	z=sum(1,n);
	cout<<"The sum of the natural numbers from 1 to n is "<<z<<endl;
	return 0;
}
