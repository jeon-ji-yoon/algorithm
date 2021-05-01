#include<bits/stdc++.h>
/*해결 방법 
점수가 같은 경우를 대비하여 가장마지막에 이긴 사람이 누군지를 
나타내 주는 lw변수 (플래그역할) 을 만든다
=> 한번도 승부가 나지 않은 경우 lw==0이다 
*/
using namespace std;
int main(){
	int a[10],b[10], resA=0 ,resB=0, lw=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	for(int i=0; i<10; i++){
		if(a[i] > b[i]){
			lw = 1;
			resA+=3;
		} 
		else if(a[i]<b[i]){
			lw = 2;
			resB+=3;
		}
		else{
			resA++;resB++;
		}
	}
	printf("%d %d\n", resA, resB);
	if(resA > resB){
		printf("%c", 'A');
	}
	else if(resA < resB){
		printf("%c", 'B');
	}
	else{
		if(lw == 1){
			printf("%c", 'A');
		} 
		else if(lw == 2){
			printf("%c", 'B');
		}
		else{
			printf("%c", 'D');
		}
	}
}
