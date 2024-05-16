 #include<iostream>
 using namespace std;
 int binSearch(int *arr,int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key)
        {
            return mid;//key found
        }
        else if(arr[mid]<key)
        {
            st=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
 }
 int main()
 {
    int arr[]={2,3,4,5,6,7,8,10,12};
    int n=sizeof(arr)/sizeof(int);
    cout<<binSearch(arr,n,180)<<endl;
    return 0;
  
 }