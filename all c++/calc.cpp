#include<iostream>
using namespace std;
int main()
{
 int a,b;
 char op;
 cout<<"Enter a & b:";
 cin>>a>>b;
 cout<<"Enter operator:";
 cin>>op;
//  if(op=='+'){
//  cout<<" a+b= "<<(a+b)<<endl;
//  }
//  else if(op=='-')
//  {
//   cout<<"a-b= "<<(a-b)<<endl;
//  }
//  else if(op=='*')
//  {
//     cout<<"a*b="<<(a*b)<<endl;
//  }
//  else if (op=='/')
//  {
//     cout<<"a/b="<<(a/b)<<endl;
 //}
 switch(op){
 case '+' :cout<<"a+b="<<(a+b)<<endl;
 break;
 case '-' :cout<<"a-b="<<(a-b)<<endl;
 break;
 case '*' :cout<<"a*b="<<(a*b)<<endl;
 break;
 case '/':cout<<"a/b="<<(a/b)<<endl;
}
}