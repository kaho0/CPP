#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 string s;
 cin>>s;
 string result="";
 for(char c:s)
 {
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
            c == 'Y' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue; // Skip vowels
        }
        result+='.';
        if(c>='A'&&c<='Z')
        {
            c=c-'A'+'a';
        }
        result+=c;
 }
 cout<<result<<endl;
}