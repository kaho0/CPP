#include<iostream>
using namespace std;
void subArrayMulti(int *arr,int n)
{
    int maxx=INT16_MIN;
    int curr=1;
    for(int i=0;i<n;i++)
    {       
        curr*=arr[i];
        maxx= max(curr,maxx);
        if(curr==0)
        {
         curr=1;
        }
    }
    cout<<"MAximum subarray multi ="<<maxx<<endl;

}
int main()
{
    // int arr[6]={2,-3,6,-5,4,2};
    int arr[5]={2,-3,-2,4};
    // int arr[4]={-2,0,-1};
    int n=sizeof(arr)/sizeof(int);
    subArrayMulti(arr,n);
}