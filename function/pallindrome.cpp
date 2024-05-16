#include<iostream>
using namespace std;
bool pallindrome(int num)
{
    int realnum=num;
    int result=0;
    while(num>0){
    int lastdigit=num%10;
     result=(result*10)+lastdigit;
    num/=10;
    }
    if(realnum!=result){
     return false;
    }
    else 
    {
        return true;
    }
}
int main()
{
    cout<<pallindrome(2462);
}