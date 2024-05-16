#include<iostream>
using namespace std;
int main()
{
    // int a=5;
    // int *ptr1=&a;
    // int *ptr2= ptr1+3;
    // cout<<ptr2<<endl;
    // cout<<ptr1<<endl;
    // cout<<ptr2-ptr1<<endl;

    //incase of array
    int arr[20]={3,5,6,7,8,3};
    int *ptr1=arr;
    int *ptr2=ptr1+3;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
     cout<<ptr2 - ptr1<<endl;

}