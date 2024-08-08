//Addition of 2D array
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<< "enter the row size:";
    cin>>n;
    cout<< "enter the column size:";
    cin>>m;
    int a[n][m];
    int b[n][m];
    cout<< "enter the elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<< "enter the elements:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    int c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<< "output:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<c[i][j]<<" ";
        }
    }
}
