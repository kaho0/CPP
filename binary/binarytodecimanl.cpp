 #include<iostream>
using namespace std;
void binTodec(int binNum){
    int n=binNum;
    int decNum=0;
    int pow=1;
    while(n>0){
        int lastDig=n%10;
        decNum+=lastDig*pow;
        pow*=2;
        n/=10;
    }
    cout<<decNum<<endl;
}
void decToBin(int decNum){
    int n=decNum;
    int pow=1;
    int binNum=0;
    while(n>0)
    {
        int rem=n%2;
        binNum+=rem*pow;
        n/=2;
        pow=pow*10;
    }
    cout<<binNum<<endl;
}
int main()
{
    binTodec(1101001);
    decToBin(20);
}