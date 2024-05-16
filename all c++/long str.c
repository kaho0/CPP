#include<stdio.h>
int main()
{
  char str[1020];
  int i;
  scanf("%s",str);
  int flag=1;
  for(i=0;str[i]!='\0';i++)
  {
    if((i%2==0||i==0)&&((str[i]>='A')&&(str[i]<='Z')))
    {
      flag=0;
      break;
}
if((i%2!=0)&&((str[i]>='a')&&(str[i]<='z')))
{ flag=0;
break;
}
}
if(flag==0)
printf("no");
else
printf("YEs");
}
