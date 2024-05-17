#include<iostream>
#include<climits>
using namespace std;
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void countingSort(int *arr,int n)
{
    int freq[100000];
    int minVal=INT_MAX,maxVal=INT_MIN;
    for(int i=0;i<n;i++)
    {
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);

    }
    for(int i=0;i<n;i++)
    {
         freq[arr[i]]++;
    }
    for(int i=minVal,j=0;i<=maxVal;i++)
    {
      while(freq[i]>0)
      {
        arr[j++]=i;
        freq[i]--;
      }
    }
    print(arr,n);
}
int main(){
int n,i,j;
cout<<"Enter the size of the array:";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
countingSort(arr,n);
}