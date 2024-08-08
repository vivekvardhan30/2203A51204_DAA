/*
6.
 Imagine you are working for a large online marketplace like Amazon or eBay. 
 One of the critical functionalities of such platforms is to display products to customers in a way that is relevant, 
 helpful, and easy to navigate. Customers can browse through thousands or even millions of products, 
 and Many users prefer to see products sorted by price, either in ascending or descending order. 
 This allows them to find thecheapest or most expensive products within their budget. 
 So, implement an application to arrange the products based on price.
*/

//using selection sort

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct market{
	float prices;
}m1;

void ascending_order(vector<market>& m1)
{
    int i, j, min_idx;
    int n=m1.size();
    for (i = 0; i < n - 1; i++)
     {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (m1[j].prices < m1[min_idx].prices)
                min_idx = j;
        }
        if (min_idx != i)
        {
            swap(m1[min_idx].prices, m1[i].prices);
        }
    }
}

void descending_order(vector<market>& m1) 
{
    int i, j, max_idx;
    int n=m1.size();
    for (i = 0; i < n - 1; i++)
     {
        max_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (m1[j].prices > m1[max_idx].prices)
                max_idx = j;
        }
        if (max_idx != i)
        {
            swap(m1[max_idx].prices, m1[i].prices);
        }
    }
}

int main() {
    int n,op;
    cout<<"Enter the size:"<<endl;
    cin>>n;
    vector<market>m1(n);
    cout<<"Enter product details:"<<endl;
    for (int i=0;i<n;i++) 
	{
       cout<<"Enter product "<<i+1<<" details:"<<endl;
       cin>>m1[i].prices;
    }
    cout<<"select one option 1. Ascending Order 2.Descending Order:"<<endl;
    cin>>op;
    if (op==1) 
	{
        ascending_order(m1);
    } 
	else 
	{
        descending_order(m1);
    }
    cout<<"The sorted product prices are:\n";
    for(int i=0;i<n;i++)
	{
       cout<<m1[i].prices<<endl;
    }
    return 0;
}


