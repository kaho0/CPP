#include<iostream>
#include<cmath>
using namespace std;
int prime(int num){
 bool prime =true;
  if(num==1)
  {
    return false;
  }
 for(int i=2;i<sqrt(num);i++)
 {
   
  if(num%i==0)
  {
    return false;
  }
 }
 return true;
}
int main()
{
    cout<<prime(22)<<endl;
}