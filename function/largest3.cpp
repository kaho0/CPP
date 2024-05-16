#include<iostream>
using namespace std;
int largest(int num1,int num2,int num3){
    if(num1>num2 && num1>num3)
    {
        return num1;
    }
    else if(num2>num1 && num2>num3){
       return num2;
    }
    else 
    return num3;

}
int main()
{
    cout<<largest(3,6,5)<<" is the largest"<<endl;
}