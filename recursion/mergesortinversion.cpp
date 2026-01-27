#include<iostream>
#include<vector>
using namespace std;

int merge(int arr[],int start, int end){
    int mid =(start+end)/2;
    vector<int>temp;
    int c = 0;
    int i = start;
    int j = mid+1;
    
    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
            
        }
        else{
            temp.push_back(arr[j]);
            c+=mid-i+1;
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
        
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
        
    }

    for(int x:temp){
        arr[start]=x;
        start++;
    }


    return c;



}

int mergesort(int arr[],int start, int end){
    if(start>=end){
        return 0;
    }

    int mid = (start+end)/2;
    int leftcount = mergesort(arr,start,mid);
    int rightcount= mergesort(arr,mid+1,end);
    int count = merge(arr,start,end);

    int totalcount = count+rightcount+leftcount;

    return totalcount;
}


int main(){
    int arr[12]={1,2,343,1231,112,34,67,56,213,11,54,23};
    int size =12;
    int start=0;
    int end = size-1;
    int inv_count=mergesort(arr,start,end);

    cout<<"total inversion count="<<inv_count<<endl;

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}