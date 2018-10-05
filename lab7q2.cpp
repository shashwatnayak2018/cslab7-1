//Write a C++ program to print all natural numbers between 1 to n using recursion.
//library
#include<iostream>
//namespace
using namespace std;
//write the function to print numbers
int number(int i,int n)
{
	cout<<i<<endl;
	if(i<=n)
	{
		i++;
		number(i,n);
	}
}
//write the main function
int main()
{
	//declaring variables
	int n;
	//ask for the value of n
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	number(1,n);
	return 0;
}
