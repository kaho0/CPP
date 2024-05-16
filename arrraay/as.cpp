#include<iostream>
using namespace std;
bool twice(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }
          
        }
    }
    return false;
}

int main()
{
    int arr[20]={1,1,1,2,3,4,3,2,4,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<twice(arr,n);
}
