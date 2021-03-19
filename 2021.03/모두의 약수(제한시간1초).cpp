#include<bits/stdc++.h>

using namespace std;
/*
작성자 : 전지윤
작성일 : 2021 03 19
해결 방법:
1. for문을 두번 돌리면 시간 복잡도가 n^2 이므로 시간 초과가 난다
2. 30000 * 30000 이면 1초 안에 해결이 안된다 
3. for(int j=i; j<=n; j=j+i)라는 반복문을 이용하면 시간 복잡도를 크게 줄일 수 있음 
*/
int n;
int arr[50004];

int main(void) {
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j=j+i){
			arr[j]+=1;
		} 
	}
	for(int i=1; i<=n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
