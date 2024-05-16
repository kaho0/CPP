#include<iostream>
using namespace std;
int main()
{
    int a=0,i,n;
    int b=1;
    cin>>n;
    cout<<a<<b;
   for(i=1;i<=n;i++)
   {
    int c=a+b;
    cout<<c;
    a=b;
    b=c;
   }
    

}