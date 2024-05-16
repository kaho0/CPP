#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cout<<"Enter the number for multiplication table:";
  cin>>n;
  for(i=1;i<=10;i++)
  {
    int table=n*i;
    cout<<n<<"*"<<i<<"="<<table<<endl;
  }
}