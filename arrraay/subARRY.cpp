#include<iostream>
using namespace std;
void printSUbArrays(int *arr,int n){
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            //cout<<"("<<start<<","<<end<<")";
            for(int i=start;i<=end;i++)
            {
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;

    }
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printSUbArrays(arr, n);
    
    return 0;
}