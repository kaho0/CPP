#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int sum=0;
    while(num>0)
    {
        int lastDigit=num%10;
        sum+=lastDigit;
        num/=10;
    }
    return sum;
}
int main()
{
    cout<<sumOfDigit(1234);
}