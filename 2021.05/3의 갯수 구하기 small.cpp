#include<bits/stdc++.h>
/*
n�� �ʸ� �����̹Ƿ� ���� for������ 3�� ������ ���Ѵ� 
�׷��� �ð� ������ ���� �ʴ´� 
*/
using namespace std;
int main(){
	int n,tmp,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		tmp = i;
		while(1){
			if(tmp == 0) break;
			
			if( tmp % 10 == 3) cnt++;
			tmp = tmp/10; 
		}
	}
	printf("%d", cnt);
	return 0;
}
