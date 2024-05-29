#include<iostream>
using namespace std;
int clearIthBit(int num,int i)
{
    int bitmask=(~(1<<i));
    return (num & bitmask);
}
int main()
{
    cout<<clearIthBit(6,1);
}