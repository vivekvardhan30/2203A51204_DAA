/*
5.
Courier and logistics companies handle a massive volume of packages daily.
These packages need to be efficiently sorted and routed to their destinations to ensure timely and accurate deliveries. 
Each package typically has a unique barcode that contains essential information like the recipient's address, delivery method, 
and tracking number.So, implement an application to arrange the packages based on tracking numbers
*/

//using insertion sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct company{
	int track_no;
	string address;
	string delivery_method;
}t1;
void insertion_sort(vector<company>& t1)
{
	int i,key,j;
	int n=t1.size();
    for (i=1;i<n;i++)
    {
        key=t1[i].track_no;
        j=i-1;
        while (j>=0 && t1[j].track_no<key) 
        {
            t1[j+1].track_no=t1[j].track_no;
            j--;
        }
        t1[j+1].track_no=key;
	}
}
int main()
{
	int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<company>t1(n);
    cout<<"enter the Package details:";
    for(int i=0;i<n;i++)
    {
    	cout<<"enter package no."<< i+1<<" details"<<endl;
    	cin>>t1[i].address>>t1[i].delivery_method>>t1[i].track_no;
	}
	insertion_sort(t1);
	cout<<"The sorted order of tracking numbers"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<t1[i].track_no<<endl;
	}
	
}
