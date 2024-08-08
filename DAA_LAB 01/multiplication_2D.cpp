//multiplication of 2D matrix
#include<iostream>
using namespace std;

int main()
{
	int r1,c1;
	cout<< "enter the row size and column size:";
	cin>>r1;
	cin>>c1;
	cout<< "enter the row size and column size:";
	int r2,c2;
	cin>>r2;
	cin>>c2;
	int a[r1][c1];
	int b[r2][c2];
	cout<<"enter the elements";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the elements";
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
	int c[r1][c2];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<r2;k++)
			{
			  c[i][j]+=a[i][k]*b[k][j];
	    	}
		}
	}
	cout<<"output:";
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<c[i][j]<<" ";
		}
	}
}
