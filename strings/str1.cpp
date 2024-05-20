#include<iostream>
#include<cstring>
using namespace std;
void toUpper(char word[],int n)
    {
      for(int i=0;i<n;i++)
      {
        char ch=word[i];
        if(ch>='a'&&ch<='z')
        {
            continue;
        }
        else{
            word[i]=ch-'A'+'a';//for upper(ch-'a'+'A')
        }
      }
    }
int main()
{
    
    // char work[]="HEllo world";
    // cout<<work;

    // char word[10];
    // cin>>word;
    // cout<<"YOur word was: "<<word<<endl;
    // cout<<"length="<<strlen(word)<<endl;
    // char word[10];
    // cin.getline(word,30,'*');
    // cout<<"YOur word was: "<<word<<endl;
    // cout<<"length="<<strlen(word)<<endl;

   char word[]="aaPPlLEe";
   toUpper(word ,strlen(word));
   cout<<word<<endl;

}