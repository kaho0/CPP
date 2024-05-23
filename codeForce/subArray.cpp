#include<iostream>
using namespace std;
void func(int *arr,int n){
    int count=0;
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            int sum=0;
            int l=0;
            for(int i=start;i<=end;i++)
            {
                sum+=arr[i];
                l++;
            }
            if(sum==l){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    // cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    func(arr, n);
    
    return 0;
}