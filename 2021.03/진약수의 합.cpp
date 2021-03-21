#include<bits/stdc++.h>
/*
작성자 : 전지윤
작성일 : 2021 03 21
해결방법 : 
1. 1은 모든 수의 진약수임을 이용한다 
그래서 1은 무조건 찍고 for문을 시작한다

2. n이라는 수를 i로 나누어서 0이면 i는 n의 약수이다 
*/
using namespace std;
int n;
int res=1;

int main(){
	cin>>n;
	printf("1" );
	
	for(int i=2; i<n; i++){
		if(n%i == 0){
			printf(" + %d", i);
			res += i;
			
		}
		
	}
	
	printf(" = %d", res);
}
