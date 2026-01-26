#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int powerof2(int n){
    if(n==0){
        return 1;
    }

    return 2*powerof2(n-1);
}

int fib(int n) {
	//base case
	if(n == 0) 
		return 0;
	if(n == 1) 
		return 1;

	int ans = fib(n-1) + fib(n-2);
	return ans;
} 

int sumn(int n){
    if(n==0){
        return 0;
    }

    return n+sumn(n-1);
}

int main(){
    cout<<factorial(10)<<endl;
    cout<<powerof2(10)<<endl;
    cout<<sumn(10)<<endl;
    return 0;

}