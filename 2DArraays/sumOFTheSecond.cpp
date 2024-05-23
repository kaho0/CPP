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
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==arr[1][j])
            {
                sum+=arr[1][j];
            }
            else 
            {
                break;
            }
        }
    }
    cout<<"sum of the numbers in the secondrow:"<<sum<<endl;
}
