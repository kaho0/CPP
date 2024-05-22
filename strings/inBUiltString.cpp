#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Apna college";
    for(char ch:str)
    {
        cout<<ch<<" ";
    }
    // for(int i=0;i<str.length();i++)
    // {
    //     cout<<str[i]<<" ";
    // }
    cout<<str.length()<<endl;
    cout<<str[3]<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(2,5)<<endl;
}
