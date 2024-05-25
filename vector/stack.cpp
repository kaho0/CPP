#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("bhaaai");
    s.push("yaha");
    s.push("pe keya");
    s.push("keya ho raha hein?");
    cout<<"Top element:: "<<s.top()<<endl;
}