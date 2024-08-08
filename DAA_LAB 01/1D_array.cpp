//Addition and multiplication of 1D array 
#include<iostream>
using namespace std;

int add(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int multiply(int a[],int n)
{
	int mul=1;
	for(int i=0;i<n;i++)
	{
		mul*=a[i];
	}
	return mul;
}
int main()
{
	int n;
	cout<<"enter the size:";
	cin>>n;
	int a[n];
	cout<<"enter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"sum= "<<add(a,n)<<endl;
	cout<<"mul= "<<multiply(a,n);
}
