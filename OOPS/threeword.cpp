#include<iostream>
#include<string>
using namespace std;
void swap_char(string &a,string &b){
    swap(a[0],b[0]);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        swap_char(a,b);
        cout << a <<" "<< b <<endl;
    }
}