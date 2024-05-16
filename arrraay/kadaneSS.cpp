#include<iostream>
using namespace std;
void maxSubArraySumKadan(int *arr,int n){
    int maxSum=INT16_MIN;
    int currSum=0;
    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
        {
            currSum=0;
        }
    }
   cout<<"MAximum subarray sum ="<<maxSum<<endl;
}
int main()
{
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
    maxSubArraySumKadan(arr,n);
}