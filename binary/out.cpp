#include<iostream>
using namespace std;
int main()
{
    // int x=3,y=5,z=10;
    // // x*=(3+7);
    // cout<<(++z+y-y+z+x++);
//     if(1+1+1+1+1==5)
//     {
//         cout<<"True";
//     }
//     else cout<<"false";
// }
// int meal=5;
// int tip=2;
// int total=meal+(meal>6? ++tip:--tip);
// cout<<tip;
// }
// int count=0;
// do{
//     cout<<"Apna college"<<endl;
//     count++;

// }
// while(count<10);
// }
// int count=1;
// while(count<=15)
// {
//     cout<<(count%2==1?"****":"++++");
//     ++count;
// }
// cout<<endl;
// int i;
// for(i=1;i<6;i++)
// {
//     if(i>3)
//     continue;
// }
// cout<<i<<endl;
int i,j;
for(i=1;i<=5;i++)
{
    for(j=5;j>=i;j--)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
}
}