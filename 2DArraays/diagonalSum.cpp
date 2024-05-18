#include<iostream>
using namespace std;
void diagonalSum(int arr[][4],int n)
{
    int sum=0;
    int secondarysum=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //       if(i==j)
    //       {
    //         sum+=arr[i][j];
    //       }
    //       else if(j==n-i-1)
    //       {
    //         sum+=arr[i][j];
    //       }
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i][i];
        if(i!=n-i-1)
        {
            sum+=arr[i][n-i-1];
        }
    }

    cout<<"sum="<<sum<<endl;
}
int main()
{
    int n,i,j;
cout<<"Enter the size of the array:";
cin>>n;
if (n > 4) {
        cout << "Size exceeds the maximum limit of 4." << endl;
        return 1;
    }

    int arr[4][4]; 
cout<<"Enter the elements of the array:";
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)   //1 2 3 
                       //4 5 6 
                       //7 8 9
    {
    cin>>arr[i][j];
}
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    cout<<arr[i][j]<<" ";
}
}
cout<<endl;
diagonalSum(arr,3);

}