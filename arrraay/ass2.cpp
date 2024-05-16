 #include<iostream>
 using namespace std;
 int bsearch(int nums[],int start,int end,int target){
        int s=start;
        int e=end;
        int mid;
        while(s<=e){
            mid=(s+e)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return -1;
        
    }
    int search(int nums[], int target,int n) {
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        int index;
        for(int i=0;i<n-1;i++){
            if((nums[i]>nums[i+1])){
                index=i;
                break;
            }
        }
        
        return max(bsearch(nums,0,index,target),bsearch(nums,index+1,n-1,target));
        
    } 
    int main(){
        int nums[]={4,5,6,7,0,1,2};
        int n=sizeof(nums)/sizeof(int);
        cout<<search(nums,0,n);
        return 0;
    }