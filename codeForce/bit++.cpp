#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string statement;
        cin>>statement;
        if(statement[1]=='+')
        {
            x++;
        }
        else
        x--;
    }
    cout<<x<<endl;
}