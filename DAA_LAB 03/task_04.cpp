/* DAA ASSIGNMENT SURESH  

4.
In an online bookstore, there are thousands of books available for purchase. The
bookstore's website allows customers to search for books based on various criteria,
such as title, author, publication date, and price. if a customer searches for books by
a specific title and price, the program can arrange the search results by price, from
low to high or vice versa, based on the customer's preference.

*/

//using bubble sort

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct OnlinebookStore{
    string book_name;
    string book_author;
    float book_price;
};

void ascending_order(vector<OnlinebookStore>& s1)
{
    int n = s1.size();
    for (int i=0;i<n-1;i++)
	{
        for (int j=0;j<n-1;j++)
		{
            if (s1[j].book_price > s1[j+1].book_price)
			{
                swap(s1[j].book_price,s1[j+1].book_price);
            }
        }
    }
}

void descending_order(vector<OnlinebookStore>& s1) 
{
    int n = s1.size();
    for (int i=0;i<n-1;i++) 
	{
        for (int j=0;j<n-1;j++) 
		{
            if (s1[j].book_price<s1[j+1].book_price) 
			{
             	swap(s1[j].book_price,s1[j+1].book_price);
            }
        }
    }
}

int main() {
    int n,op;
    cout<<"Enter number of books:"<<endl;
    cin>>n;
    vector<OnlinebookStore>s1(n);
    cout<<"Enter book details:"<<endl;
    for (int i=0;i<n;i++) 
	{
       cout<<"Enter book "<<i+1<<" details:"<<endl;
       cin >> s1[i].book_name >> s1[i].book_author >> s1[i].book_price;
    }
    cout<<"select one option 1. Ascending Order 2.Descending Order:"<<endl;
    cin>>op;
    if (op==1) 
	{
        ascending_order(s1);
    } 
	else 
	{
        descending_order(s1);
    }
    cout<<"The sorted prices are:\n";
    for(int i=0;i<n;i++)
	{
       cout<<s1[i].book_price<<endl;
    }
    return 0;
}


