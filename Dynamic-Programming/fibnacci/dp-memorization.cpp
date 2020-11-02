#include<bits/stdc++.h>
using namespace std;
int memo[10000002];

/** Find nth fibnacci number(Exponential) **/



int fib(int n){
	if(memo[n] != 0){
		return memo[n];
	}

	if(n<=2){
		return 1;
	}
	else{
		return memo[n] = fib(n-1)+fib(n-2);
	}
}

int main(){
	// printing 10 fibonacci numbers
	for(int i = 1;i<=10000002;i++){
		memo[i] = 0;
	}
	for(int i = 1;i<=46;i++){
		cout<<fib(i);
		if(i!=10){
			cout<<' ';
		}
	}
	cout<<endl;
}
