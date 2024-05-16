#include<iostream>
using namespace std;
void function(int arr[])
{
  arr[0]=100;
}
void fun2(int *ptr)
{
    ptr[0]=100;
}
int main()
{
    int a=5;
    int *ptr=&a;
    cout<<ptr<<endl;

    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    function(arr);
    cout<<arr[0]<<endl;
    

}