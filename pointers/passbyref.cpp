// const myAdress='212/A shamoli Tower Shamoli';
// console.log(myAdress.length);#
#include<iostream>>
using namespace std;
void multiplyby2(int &a,int &b, int &c)
{
    a*=2;
    b*=2;
    c*=2;
}
int main()
{
    // int x;
    // int *ptr;
    // x=7;
    // ptr=&x;
    // cout<<*ptr;
    int x=1,y=2,z=3;
    multiplyby2(x,y,z);
    cout<<x<<endl<<y<<endl<<z<<endl;

}
