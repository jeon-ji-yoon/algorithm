#include<bits/stdc++.h>
using namespace std;
/*
1. c++������ ���ʿ��� ���������� ���پ� �о������. ���� �迭�� �ΰ��� �ʿ��� 
2. �����������ؼ� ���� �� �ִ� ��� ��Ȳ�� �������� 
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
