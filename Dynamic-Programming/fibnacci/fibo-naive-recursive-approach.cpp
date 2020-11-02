#include<bits/stdc++.h>
using namespace std;

/** Find nth fibnacci number(Exponential) **/

int fib(int n){
	if(n<=2){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}

int main(){
	// printing 10 fibonacci numbers
	for(int i = 1;i<=10;i++){
		cout<<fib(i);
		if(i!=10){
			cout<<' ';
		}
	}
	cout<<endl;
}
