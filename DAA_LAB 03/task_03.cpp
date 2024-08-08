/*

3.
Imagine you're working for a large online marketplace company that facilitates the buying and selling of various products.
As part of the order processing system, the company receives thousands of new orders every minute from customers 
all around the world. To ensure efficient and timely order fulfillment, the orders need to be sorted based on various
criteria before they can be processed and shipped.Some customers may request advanced shipping or have urgent requirements. 
So, implement an application to arrange the Orders based on priority Number.

*/

// using bubble sort

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct order{
	int order_id;
	string order_name;
}p1;

void bubble_sort(vector<order>& p1)
{
	int n=p1.size();
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(p1[j].order_id>p1[j+1].order_id)
			{
			  int temp=p1[j].order_id;
			  p1[j].order_id=p1[j+1].order_id;
			  p1[j+1].order_id=temp;
		    }
		}
	}
}

int main() {
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<order>p1(n);
    cout<<"Enter order details:"<<endl;
    for (int i=0;i<n;i++) 
	{
       cout<<"Enter the order "<<i+1<<" details:"<<endl;
       cin>>p1[i].order_name>>p1[i].order_id;
    }
    bubble_sort(p1);
    cout<<"The sorted order ID's are:\n";
    for(int i=0;i<n;i++)
	{
       cout<<p1[i].order_id<<endl;
    }
    return 0;
}
