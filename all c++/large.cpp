#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"num1 is largest :"<<num1;
    }
    else {
        cout<<"num2 is largest :"<<num2;
    }
}