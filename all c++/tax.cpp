#include<iostream>
using namespace std;
int main()
{
    int sal;
    cout<<"Enter your salery: ";
    cin>>sal;
    if(sal<500000)
    {
        cout<<sal;
    }
   else if(sal>500000 && sal<=1000000)
    {
        int tax= (sal*.20);
        cout<<"Final salery is:"<<tax;

    }
    else if(sal>1000000)
    {
         int tax= (sal*.30);
        cout<<"Final salery is:"<<tax;
    }

}