#include<iostream>
using namespace std;
bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length())
    {
        cout<<"NOt valid anagram";
        return false;
    }
    int count[26]={0};
    for(int i=0;i<str1.length();i++)
    {
        int indx=str1[i]-'a';
        count[indx]++;
    }
    for(int i=0;i<str2.length();i++)
    {
        int indx=str2[i]-'a';
        count[indx]++;
        if(count[indx]==0)
        {
            cout<<"not valid anagram";
            return false;
        }
        count[indx]--;
    }
    cout<<"valid anagram";
    return true;
}
int main()
{
    string str1="nagaram";
    string str2="anagram";
    isAnagram(str1,str2);
}