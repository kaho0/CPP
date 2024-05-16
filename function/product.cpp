#include<iostream>
using namespace std;
// int product(int a,int b)
// {
//     int p = a*b;
//     return p;
// }
bool isEVen(int a)
{
    if(a%2==0)
    {
        return true;
    }
    else
    {
     return false;

    } 
}
int main()
{
    cout<<isEVen(3)<<endl;
    // int pro=product(3,6);
//     cout<<pro;
}