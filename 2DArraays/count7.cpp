#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m;
    cout<<"ROW VALUE:";
    cin>>n;
    cout<<"COlUMN VALUE:";
    cin>>m;
    int arr[m][n];
       
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==7)
            {
                count++;
            }
        }
    }
    cout<<"7 occurs  "<<count<<" times";

}