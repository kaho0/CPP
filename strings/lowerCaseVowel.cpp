#include<iostream>
using namespace std;
int countVowels(string s)
{
    int vowelCount=0;
    for(char c:s)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        vowelCount++;
    }
    return vowelCount;
}
int main()
{
  string s;
  cout<<"enter a string:";
  getline(cin,s);
  int vowels=countVowels(s);
  cout<<"NUmber of lowercase vowels:"<<vowels;
}