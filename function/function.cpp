#include<iostream>
using namespace std;
void sayhello(){
    cout<<"HEllo";
}
void assistant(){
    sayhello();
    cout<<"work done";
}
int main()
{
    assistant();  
    return 0;
}