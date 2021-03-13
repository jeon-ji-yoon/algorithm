#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
작성일 : 2021 03 13
작성자 : 전지윤 
문제유형 : 그리디
문제해결:
1. 이차원 배열을 안만든다. 대신 한줄씩 입력받을 때마다 처리한다
*/
using namespace std;
int n,m; //n은 행의 갯수 
int res = -100;
int main(void){
	cin >> n>>m;
	for(int i=0; i<n; i++){
		vector<int> v;
		for(int j=0; j<m; j++) {
			int x;
			cin >> x;
			v.push_back(x);
			
		}
		sort(v.begin(), v.end());
		int temp = v[0];
		if(temp > res){
			res = temp;
			
		}
		
	}
	cout << res;
	
	return 0;
}
