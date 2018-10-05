//Write a C++ program to find power of any number using recursion.
//library
#include<iostream>
//name space
using namespace std;
//a function to find power of a number
int power(int m,int n)
{
	//declaring variables
	int pow;
	if(n>0)
	{
		pow=(m*power(m,(n-1)));
	}
	if(n==0)
	{
		return 1;
	}
	return pow;
}
//write the main function 
int main()
{
	int m,n,z;
	//ask for value of m
	cout<<"Enter the value of m:"<<endl;
	cin>>m;
	//ask for the value of n
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	z=power(m,n);
	cout<<"The value of m^n is found to be"<<z<<endl;
	return 0;
}
