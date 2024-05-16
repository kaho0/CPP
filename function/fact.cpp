#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
        
    }
    cout<<"Factorial ("<<n<<")="<<f<<endl;
     return f;
   
}
int main()
{
    fact(3);
    fact(4);
    fact(5);
    fact(6);
    
}