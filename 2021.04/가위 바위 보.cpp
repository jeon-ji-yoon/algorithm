#include<bits/stdc++.h>
using namespace std;
/*
1. c++에서는 왼쪽에서 오른쪽으로 한줄씩 읽어내려간다. 따라서 배열이 두개가 필요함 
2. 가위바위보해서 나올 수 있는 모든 상황을 따져본다 
*/
int main(){
	int n, hand1[101], hand2[101];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &hand1[i] );
	}
	for(int i=0; i<n; i++){
		scanf("%d",&hand2[i] );
	}
	for(int i=0; i<n; i++){
		if(hand1[i] == hand2[i]){
			printf("D\n");
		}
		else if(hand1[i] - hand2[i] == 1){
			printf("A\n");
		}
		else if(hand1[i] - hand2[i] == -2){
			printf("A\n");
		}
		else {
			printf("B\n");
		}
		
	}
}
