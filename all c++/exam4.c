#include<stdio.h>

int main()
{
  int n,i,j,max1,max2,temp;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(j=0;j<n;j++)
  {
 for(i=0;i<n-1;i++)
 {
   if(arr[i]<arr[i+1])
   {
     temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;
   }
 }
  }for(i=0;i<n;i++)
  {
    printf("%d\n",arr[i]);
  }
  printf("\n%d",arr[1]);
}
