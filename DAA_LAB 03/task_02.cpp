/*
2.
Imagine you are working for a retail store that sells a wide variety of products.
The store has a vast inventory with thousands of items, and it's becoming challenging for 
the employees to manage and locate products efficiently. Customers often ask for specific items,
and employees need to find them quickly. The sorting program's primary goal is to organize 
the products in the inventory systematically, allowing for faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product IDs.

*/

//using selection sort

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct customer{
	int product_id;
	string product_name;
}c1;

void selection_sort(vector<customer>& c1)
{
    int i, j, min_idx;
    int n=c1.size();
    for (i = 0; i < n - 1; i++)
     {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (c1[j].product_id < c1[min_idx].product_id)
                min_idx = j;
        }
        if (min_idx != i)
        {
            swap(c1[min_idx].product_id, c1[i].product_id);
        }
    }
}

int main() {
    int n;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<customer>c1(n);
    cout<<"Enter product details:"<<endl;
    for (int i=0;i<n;i++) 
	{
       cout<<"Enter the product "<<i+1<<" details:"<<endl;
       cin>>c1[i].product_name>>c1[i].product_id;
    }
    selection_sort(c1);
    cout<<"The sorted product ID's are:\n";
    for(int i=0;i<n;i++)
	{
       cout<<c1[i].product_id<<endl;
    }
    return 0;
}
