#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
char str[100],str1[101];
gets(str);
  gets(str1);
  strcat(str,str1);
  strcat(str,str1);
  int n=strlen(str1);
  bool flag=true;
  for(int i=0;j=n-1;i<j;i++,j--)
  {
if(str[i]!=str[j])
{
  flag=false;
}
  }
  if(flag==true)
  {
    printf("pal")
  }
  else{printf("not pal);
}
}
