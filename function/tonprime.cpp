#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n)
{
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void allprime(int n){
    for(int i=2;i<=n;i++)
    {
        if (isprime(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    allprime(50);
}