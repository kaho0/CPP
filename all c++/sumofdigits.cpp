#include<iostream>
using namespace std;
int main()
{
    int digit,sum=0;
    cout<<"Enter the number:";
    cin>>digit;
    while(digit>0){
    int lastdigit=digit%10;
    if(lastdigit%2!=0){
    sum+=lastdigit;

   
}
 digit=digit/10;
    }
cout<<"sum="<<sum;
}