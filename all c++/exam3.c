#include<stdio.h>
#include<string.h>
int main()
{
  int v=0,co=0,sp=0,i;
  char str[150];
 gets(str);
  int n=strlen(str);
  strupr(str);
  for(i=0;i<n;i++){
  if(str [i]==' a'|| str [i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'||str[i]=='I')
  {
    v++;
  }
  else if (str[i]==' ')
  {
    sp++;
  }
  co=n-sp-v;
  }
  printf("%c  v=%d %c  %c co=%d  %c",'"',v,'"'  ,'"',co,'"');
}
