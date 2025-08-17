#include<iostream>
using namespace std;

int first_occ(int arr[],int size,int target){
    int start  =0 ;
    int end = size-1;
    int ans = -1;
    
    while(start <=end){
        int mid = start + (end-start)/2;
        if(target==arr[mid]){
            ans=mid;
            end = mid-1;
        }
        else if (target>arr[mid]){
            start = mid +1;
        }
        else if (target <arr[mid]){
            end = mid -1;
        }
    }
    return ans;
}

int main(){
    int n = 7;
    int arr[n]={1,2,2,3,3,4,8};
    int target = 3;
    int ans = first_occ(arr,n,target);
    if(ans==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element first occured at index :"<<ans;
    }
}