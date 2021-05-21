#include<bits/stdc++.h>
/*
n이 십만 이하이므로 이중 for문으로 3의 갯수를 구한다 
그래도 시간 에러가 나지 않는다 
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
