#include<iostream>
using namespace std;
int main()
{
    int fact =1;
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}