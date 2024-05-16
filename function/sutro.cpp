#include<iostream>
#include<cmath>
using namespace std;
int formula(int a,int b){
int result=((a*a)+(b*b)+(2*a*b));
return result;
}
int main()
{
    cout<<formula(2,3);
}