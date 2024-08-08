/* DAA ASSIGNMENT NEELIMA
1.
Imagine you work for a large logistics company that handles a high volume of package deliveries on a daily basis. 
The company's success hinges on ensuring that packages are delivered to their respective destinations efficiently and on time. 
To solve this problem, you create a program that can quickly process and classify packages based on their destination.

*/

//using insertion sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct company{
	int package_no;
	string address;
}c1;

void ascending_order(vector<company>& c1)
{
	int i,key,j;
	int n=c1.size();
    for(i=1;i<n;i++)
    {
        key=c1[i].package_no;
        j=i-1;
        while(j>=0 && c1[j].package_no>key)
        {
            c1[j+1].package_no=c1[j].package_no;
            j--;
        }
        c1[j+1].package_no=key;
	}
}

void descending_order(vector<company>& c1)
{
	int i,key,j;
	int n=c1.size();
    for (i=1;i<n;i++)
    {
        key=c1[i].package_no;
        j=i-1;
        while (j>=0 && c1[j].package_no<key) 
        {
            c1[j+1].package_no=c1[j].package_no;
            j--;
        }
        c1[j+1].package_no=key;
	}
}

int main()
{
	int n,op;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<company>c1(n);
    cout<<"enter the Package details:";
    for(int i=0;i<n;i++)
    {
    	cout<<"enter package no."<< i+1<<" details"<<endl;
    	cin>>c1[i].address>>c1[i].package_no;
	}
	cout<<"select one option 1. Ascending Order 2.Descending Order:"<<endl;
    cin>>op;
    if (op==1) 
	{
        ascending_order(c1);
    } 
	else 
	{
        descending_order(c1);
    }
	cout<<"The sorted order of package"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<c1[i].package_no<<endl;
	}
	
}
