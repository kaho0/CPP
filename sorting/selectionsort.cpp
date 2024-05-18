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
for(i=0;i<n-1;i++)
{
    int min=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
}

for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

}