#include<iostream>
using namespace std;
int main()
{
    float pencil,pen,eraser;
    cin>>pencil>>pen>>eraser;
    cout<<"Total bill:"<<(pen+pencil+eraser)<<endl;
    float total=(pen+pencil+eraser);
    cout<<"With vat:"<<(total*.18)+total;
}