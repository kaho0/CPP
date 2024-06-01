#include<iostream>
using namespace std;
int clearFromItoJ(int num,int i,int j)
{
    int allOnes=~0;
    int leftJ=allOnes<<(j+1);
    int rightI=(1<<i)-1;
    int mask=rightI|leftJ;
    num=num&mask;
    cout<<num<<endl;

}
int main()
{
    clearFromItoJ(15,1,3);
}