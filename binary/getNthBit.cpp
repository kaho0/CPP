#include<iostream>
using namespace std;
int getNthBit(int num,int i)
{
    int bitMask=1<<i;
    if(num&bitMask==0)
    {
      return 0;
    }
    else return 1;

}
int setIthBit(int num,int i)
{
    int bitmask=1<<i;
    return(num|bitmask);
}
int clearIthBit(int num,int i)
{
    int bitmask=~(1<<i);
    return num&bitmask;
}
bool isPowerOfTwo(int num)
{
    if(!(num&(num-1)))
    {
        return true;
    }
    else return false;
}
int main()
{
    cout<<getNthBit(6,2)<<endl; 
    cout<<getNthBit(7,5)<<endl;
    cout<<setIthBit(6,3)<<endl;
    cout<<clearIthBit(6,1)<<endl;
    cout<<isPowerOfTwo(4)<<endl;
    cout<<isPowerOfTwo(5)<<endl;
    cout<<isPowerOfTwo(2)<<endl;
    cout<<isPowerOfTwo(11)<<endl;
}