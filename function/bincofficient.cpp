#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
        
    }
     return f;
   
}
int bincoff(int n,int r)
{
    int v1=fact(n);
    int v2=fact(r);
    int v3=fact(n-r);
    int res=v1/(v2*v3);
    return res;
}
int main()
{
    cout<<bincoff(4, 2);
}