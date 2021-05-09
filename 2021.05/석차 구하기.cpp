#include<bits/stdc++.h>
/*
브루트포스이므로 이중 포문으로 모든 경우의 수를 살펴보기
점수 같으면 석차가 같아서 프루트포스임!! 
자기보다 큰 점수가 나오면 rank++ 
*/
using namespace std;
int main(){
	int n,score[200], rank[200];
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &score[i]);rank[i]=1;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		    if(score[i] < score[j] ){
		    	rank[i]++;
			}
	    }
	}
	for(int i=0; i<n; i++){
		printf("%d ", rank[i]);
	}
	return 0;
}
