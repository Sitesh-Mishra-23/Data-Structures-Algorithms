#include<iostream>
using namespace std;

void merge(int arr[],int temp[],int start,int end){
    for(int i =start;i<=end;i++){
        temp[i]=arr[i];
    }

    int mid =(start+end)/2;
    int i =start;
    int j =mid+1;
    int mainindex = start;

    while(i<=mid && j <=end){
        if(temp[i]<temp[j]){
            arr[mainindex]=temp[i];
            mainindex++;
            i++;
        }
        else{
            arr[mainindex]=temp[j];
            j++;
            mainindex++;
        }
    }

    while(i<=mid){
        arr[mainindex]=temp[i];
        mainindex++;
        i++;
    }
}

void mergesort(int arr[],int temp[],int start,int end){
    if(start>=end){
        return ;
    }
    int mid = (start+end)/2;

    mergesort(arr,temp,start,mid);
    mergesort(arr,temp,mid+1,end);
    merge(arr,temp,start,end);
}

int main(){
    int arr[10]={2,4,2,32,121,647,23,34,66,23};
    int size = 10;
    int temp[size];
    int start =0 ;
    int end = size-1;
    mergesort(arr,temp,start,end);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

// void merge(int arr[], int temp[], int start, int mid, int end) {
//     // copy to temp
//     for (int i = start; i <= end; i++)
//         temp[i] = arr[i];

//     int i = start;      // left half
//     int j = mid + 1;    // right half
//     int k = start;      // main array

//     while (i <= mid && j <= end) {
//         if (temp[i] <= temp[j])
//             arr[k++] = temp[i++];
//         else
//             arr[k++] = temp[j++];
//     }

//     // copy remaining left part
//     while (i <= mid)
//         arr[k++] = temp[i++];

//     // right part already in correct place
// }

// void mergesort(int arr[], int temp[], int start, int end) {
//     if (start >= end)
//         return;

//     int mid = start + (end - start) / 2;

//     mergesort(arr, temp, start, mid);
//     mergesort(arr, temp, mid + 1, end);
//     merge(arr, temp, start, mid, end);
// }

// int main() {
//     int arr[15] = {2,5,2,1,3,7,9,3,23,90,34,12,543,45,67};
//     int size = 15;

//     int temp[15];   // ONE extra array

//     mergesort(arr, temp, 0, size - 1);

//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


