#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(1);
     cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(3);
     cout<<"capacity"<<v.capacity()<<endl;
     v.push_back(4);
      cout<<"capacity"<<v.capacity()<<endl;
      v.push_back(5);
       cout<<"capacity"<<v.capacity()<<endl;
       cout<<"before pop"<<endl;
       for(int i:v)
       {
        cout<<i<<" ";

       }
       cout<<endl;
       v.pop_back();
       cout<<"After pop"<<endl;
       for(int i:v)
       {
        cout<<i<<" ";
       }
}