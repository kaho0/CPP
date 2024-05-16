#include<iostream>
using namespace std;
void printArr(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        //cout<<*ptr<<endl;
        //ptr++;
        cout<<*(ptr+i)<<endl;
       
          
    }
}
int main()
{
    int arr[]={1,2,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    printArr(arr,n);
}