#include<iostream>
#include<string.h>
using namespace std;

int lenstr(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}

void revstr(char ch [], int size){
    int i =0;
    int j =size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }


}

void upstr(char ch[],int size){
    int index =0 ;
    while(index<size){
        if(ch[index]>= 'a' && ch[index]<= 'z'){
            ch[index]=ch[index]-'a'+'A';
        }
        index++;
    }
}

void lowstr(char ch[]){
    int index=0;
    while(ch[index]!='\0'){
        if(ch[index]>='A' && ch[index]<='Z'){
            ch[index]=ch[index]-'A'+'a';
        }
        index++;
    }
}

void rep(char ch[], int size){
    int i=0;
    while(i<size){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;

    }
}

bool palindrome(char ch[],int size){
    int i =0;
    int j =size-1;
    while(i<=j){
        if(ch[i]!=ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// int main(){
//     // char ch[10];
//     // cout<<"Enter in string array:";
//     // cin>>ch;

//     // char ch1[20];
//     // cout<<"Enter in string array with space:";
//     // cin.ignore();
//     // cin.getline(ch1,20);
//     // cout<<endl<<"First string is :"<<ch<<endl;
//     // cout<<endl<<"Second string is :"<<ch1;

//     char ch[20];
//     cin.getline(ch,99);
//     int len = lenstr(ch);
//     cout<<"length of the given string is = "<<len;
//     cout<<"Given string :"<<ch<<endl;
//     // revstr(ch,len);
//     // cout<<"Reversed stirnng is = "<<ch<<endl;
//     // lowstr(ch,len);

//     // cout<<"lowercase string is ="<<ch;

//     // rep(ch,len);
//     // cout<<" replaced string :"<<ch;

//     bool p = palindrome(ch,len);
//     if(p==true){
//         cout<<"Given string is palindrome";
//     }
//     else{
//         cout<<"Given string is not palindrome";
//     }

// }

int main(){
    string ch;
    getline(cin,ch);
    cout<<ch;
    cout<<ch.length();
}
