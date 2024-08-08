// Insertion sort O(n^2)
#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
	int i,key,j;
    for (i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
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
	insertion_sort(a,n);
	cout<<"output:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
}
