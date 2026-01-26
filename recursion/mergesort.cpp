#include<iostream>
using namespace std;

void merge(int arr[],int start,int end){
    int mid = (start+end)/2;

    int leftlen=mid-start+1;
    int rightlen=end-mid;

    int* left = new int[leftlen];
    int* right= new int[rightlen];

    int k=start;
    for(int i =0;i<leftlen;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i =0;i<rightlen;i++){
        right[i]=arr[k];
        k++;
    }

    int leftindex=0;
    int rightindex=0;
    int mainindex=start;

    while(leftindex<leftlen && rightindex<rightlen){
        if(left[leftindex]<right[rightindex]){
            arr[mainindex]=left[leftindex];
            leftindex++;
            mainindex++;
        }
        else{
            arr[mainindex]=right[rightindex];
            rightindex++;
            mainindex++;
        }
    }

    while(rightindex<rightlen){
        arr[mainindex]=right[rightindex];
        rightindex++;
        mainindex++;
    }

    while(leftindex<leftlen){
        arr[mainindex]=left[leftindex];
        leftindex++;
        mainindex++;
    }

    delete[] left;
    delete[] right;
}

void mergesort(int arr[],int start,int end){
    if(start>=end){
        return ;
    }

    int mid =  (start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,end);
}

int main(){
    int arr[6]={10,2,4,6,1,0};
    int size = 6;
    int start = 0;
    int end = size-1;
    mergesort(arr,start,end);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}