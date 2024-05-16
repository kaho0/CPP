#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,even=0,odd=0,diff=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
  if(i%2==0)
  {
    even+=arr[i];
  }
  else odd+=arr[i];
}
n=abs(even-odd);
printf("%d",n);
}
