//creation and element access
#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr[4];
    return 0;
}

//taking input array and printing it 
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array:";
    cin>>size;
    int arr[size];
    //input array
    for(int i =0;i<size;i++){
        cout<<"enter element for index "<<i<<":";
        cin>>arr[i];
    }
    
    // printing array
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}

//left shift array by 1
#include <iostream>
using namespace std;

void shift_array(int arr[],int size){
    int first=arr[0];
    for(int i =0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first;
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    shift_array(arr,size);
    return 0;
}

//linear search 
#include <iostream>
using namespace std;
int linear_search(int arr[],int size,int target){
    int ans=-1;
    for(int i= 0;i<size;i++){
        if(arr[i]==target){
            ans=i;
        }
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int target;
    cout<<"enter target element:";
    cin>>target;
    int ans = linear_search(arr,size,target);
    if(ans==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element found at index:"<<ans;
    }
    
}

//minimum number 
#include <iostream>
#include <limits.h>
using namespace std;

int min_num(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5]={1,2,-24,4,5};
    int size=5;
    int min  = min_num(arr,size);
    cout<<"minimum number is = "<<min;
    return 0;
}

//extreme print in array
#include <iostream>
using namespace std;

void extreme_print(int arr[],int size){
    int left=0;
    int right=size-1;
    
    while(left<=right){
        if(left==right){
            cout<<arr[right];
        }
        else{
            cout<<arr[left]<<" "<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}
int main(){
    int arr[5]={1,2,-24,4,5};
    int size=5;
    extreme_print(arr,size);
    return 0;
}

//unique element in array
#include <iostream>
using namespace std;

int unique_ele(int arr[],int size){
    int unique=0;
    for(int i =0;i<size;i++){
        unique=(unique)^(arr[i]);
    }
    return unique;
}
int main(){
    int arr[5]={1,1,2,2,4};
    int size=5;
    int uni=unique_ele(arr,size);
    cout<<"unique element is= "<<uni;
    return 0;


}//left shift array by 1
#include <iostream>
using namespace std;

void shift_array(int arr[],int size){
    int first=arr[0];
    for(int i =0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first;
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    shift_array(arr,size);
    return 0;
}

//sort 0 and 1
#include <iostream>
using namespace std;

void sort_array(int arr[],int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        if(arr[left]==0){
            left++;
        }
        else if (arr[right]==1){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={0,1,0,1,0};
    int size=5;
    sort_array(arr,size);
    return 0;
}