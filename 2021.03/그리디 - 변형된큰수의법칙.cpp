#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
날짜 : 2021 3 12
코드 짠 사람 : 전지윤 
문제유형 : 그리디(매순간마다 가장 최적의 경우를 파악하는 것) 
문제 푸는 법 : 
1. 그리디는 정렬을 하는 경우가 많다 
2. 가장 큰 수가 더해지는 횟수 및 두번째로 큰수가 더해지는 횟수를 구한다 
*/
using namespace std;

int n , m ,k; //m은 총 몇번을 더할 것이냐 

int res = 0;
vector<int> v;
int main(void){	
	cin >> n>> m>>k;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	int temp1 = m/(k+1);
	int temp2 = m%(k+1);
	int maxNum1 = v[n-1];
	int maxNum2 = v[n-2];
	res+= maxNum1 * (temp1*k + temp2);
	res += maxNum2 * (m -(temp1*k + temp2) );
	
	cout << res;
	return 0;
}
