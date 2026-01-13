#include<iostream>
using namespace std;

int main(){
    // int b = 2;
    // b=b+1;
    // int* ptr2=&b;
    // cout<<*ptr2;
    // cout<<ptr2;
    
    // int a[5]= {5,3,4,5,6};
    // a=a+1;
    // int* ptr = a;
    // cout<<*ptr;

    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*(ptr+1)<<endl;

    // char ch[10] = "Love";
    // char* ptr = ch;
    // cout<<ptr;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr[1]<<endl;
    // cout<<ptr[2]<<endl;

    char ch[12]="statement";
    char* cptr=&ch[0];
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<*(ch+3)<<endl;
    cout<<cptr<<endl;
    cout<<*(cptr+3)<<endl;
    cout<<cptr+2<<endl;
    cout<<*cptr<<endl;




    return 0;
}