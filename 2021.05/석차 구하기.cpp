#include<bits/stdc++.h>
/*
���Ʈ�����̹Ƿ� ���� �������� ��� ����� ���� ���캸��
���� ������ ������ ���Ƽ� ����Ʈ������!! 
�ڱ⺸�� ū ������ ������ rank++ 
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
