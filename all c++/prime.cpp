#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool isPrime=true;
    int n,i;
   cin>>n;
   for(i=2;i<sqrt(n);i++)
   {
     if(n%i==0)
     {
        isPrime=false;
        break;
     }
    
   }
   if(isPrime)
   {
    cout<<"The num is prime";
   }
   else cout<<"not prime";

}