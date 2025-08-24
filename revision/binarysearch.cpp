// first occurence
#include <iostream>
using namespace std;

int first_occ(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return ans;
}
int main() {
    int arr[10]={2,2,2,4,2,6,7,8,9,10};
    int size=10;
    int target=2;
    int ans=first_occ(arr,size,target);
    if(ans==-1){
        cout<<"element is not present in array";
    }
    else{
        cout<<"element first occured at index ="<<ans;
    }
    return 0;
}

// missing element
#include <iostream>
using namespace std;
int missing_ele(int arr[],int size){
    int st=0;
    int end=size-1;
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        int p= arr[mid]-mid;
        if(p!=1){
            ans=mid;
            end=mid-1;
        }
        else if (p==1){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    return ans;
}
int main() {
    int arr[5]={1,3,4,5,6};
    int size=5;
    int ans = missing_ele(arr,size);
    if(ans==-1){
        cout<<"there is no missing element";
    } 
    else{
        cout<<"missing element found at index :"<<ans<<" and the element should be:"<<ans+1;
    }
    return 0;
}