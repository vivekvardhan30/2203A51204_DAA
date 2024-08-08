// Selection Sort O(n^2)
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
     {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
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
	selectionSort(a,n);
	cout<<"output:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
}

