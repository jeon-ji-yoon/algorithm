#include<bits/stdc++.h>

using namespace std;

/*
작성일 : 2021 03 20
작성자 : 전지윤 
해결방법 : 
1. bool isPrime(int x)함수와 int reverse(int x)함수를 작성한다 
2. int reverse(int x)함수는 파라미터인 x를 %10 하고 /10 한다
예를들어 x = 730이라면, r = 730%10 하고 x = x/10
이 작업을 반복한다
그리고 r*10 이라는 작업도 해준다 
*/


bool isPrime(int x){
	bool flag = true;
	for(int i=2; i<x; i++){
		if(x%i == 0){
			flag = false;
		    break;
			
		}
	}
	return flag;
}

int reverse(int x){
	int r=0; 
	while (x != 0) { 
		r = r*10 + x%10;
		x = x/10; 
	} 
	return r;
}

int n, input, temp ;
int arr[105];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		scanf("%d", &input);
		temp = reverse(input);
		//if(소수인 경우에는)
		if(isPrime( temp) ) {
		    printf("%d ", temp);
		}		
	}	
}
