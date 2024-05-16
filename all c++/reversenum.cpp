#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int lastdig=n%10;
        cout<<lastdig;
        n/=10;
    }
    cout<<endl;
}