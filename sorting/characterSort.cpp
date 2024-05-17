#include<iostream>
using namespace std;
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
for(i=1;i<n;i++)
{
   int temp=arr[i];
   j=i-1;
   while(j>=0 && arr[j]<temp)
   {
    arr[j+1]=arr[j];
    j--;
   }
   arr[j+1]=temp;
}
cout<<"After sorting the array:";
for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}


}