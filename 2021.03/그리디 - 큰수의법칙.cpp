#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
문제유형 : 그리디(매순간마다 가장 최적의 경우를 파악하는 것) 
*/
using namespace std;

int n , m ,k; //m은 총 몇번을 더할 것이냐 
int cnt = 0;
int res = 0;


int main(void){
	
	
	
	cin >> n>> m>>k;
	vector<int> v(n); //이거 전역 변수로설정 안되냐 
	for(int i=0; i<n; i++){
		std::cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	while( true){
		for(int i=0; i<k; i++){
			res += v[n-1];
			
			cnt += 1; //여기서 문제생겼네 
			if(cnt == m){
				break; 
			} 
			
		}
		res+=v[n-2];
		cnt +=1;
		if(cnt == m){
			break; 
		} 
	}
	cout << res;
	
	
	return 0;
}
