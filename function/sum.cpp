#include<iostream>
using namespace std;
int sum(int n1,int n2=1)
{
    int sum=n1+n2;
    return sum;
}
int diff(int a,int b){
    int diff=a-b;
    return diff;
}
int main()
{
 int total=sum(4);
 cout<<total<<endl;
 int d=diff(10,4);
 cout<<d;
}