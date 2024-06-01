#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>&num)
{
    int ans=0;
    for(int i=0;i<num.size();i++)
    {
        ans^=num[i];
    }
    return ans;
}
int main()
{
    vector<int>num={4,1,2,3,3,1,2};
    cout<<singleNumber(num)<<endl;
}