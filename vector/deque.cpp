#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(4);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    d.pop_back();
    for(int i:d){
    cout<<i;
}
    d.pop_front();
    for(int i:d){
    cout<<i;
}
}