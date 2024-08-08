// bubble sort O(n^2)
#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			  int temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
		    }
		}
	}
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
	bubble_sort(a,n);
	cout<<"output:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
}
