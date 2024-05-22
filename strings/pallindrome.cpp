#include<iostream>
#include<cstring>
using namespace std;
bool isPallindrome(char str[],int n)
{
    int st=0,end=n-1;
  while(st<end)
  {
  if(str[st++]!=str[end--])
  {
    cout<<"Not valid pallindrome";
    return false;
  }
  }
  cout<<"Valid pallindrome";
}
int main()
{
  char word[100];  // Allocate enough space for the input string
    cout << "Enter a word: ";
    cin >> word;
    isPallindrome(word, strlen(word));
    return 0;

}