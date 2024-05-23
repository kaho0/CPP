#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5};
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.pop_back();
    cout<<"Size:"<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;

}