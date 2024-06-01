#include<iostream>
using namespace std;
void clearFromIth(int num,int i)
{
 int bitmask=((~0)<<i);
 num=num & bitmask;
 cout<<num<<endl;
}
int main()
{
    clearFromIth(15,2); 
}