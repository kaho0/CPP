#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the number of terms:";
    cin>>n;
    int f=0,s=1;
    cout<<f<< " " <<s<< " ";
    int i=2;
    while(i<n)
    {
        int th=f+s;
        cout<< th <<" ";
        f=s;
        s=th;
        i++;
    }
}