#include<stdio.h>
/*해결방법
1. 1부터 15까지 1,2,3,4,5,6,7,8,9(9개)10 11 12 13 14 15 (12개) 총21개의 숫자가 쓰인다 
2. 1부터 n까지 for문을 돌면서 각각의 수마다 get_digit() 함수를 적용해서 자릿수를 구한후 
res 에 합친다. 
*/
int get_digit(int x){
	int cnt=0;
	while(x!=0){
		x=x/10;
		cnt+=1;
	}
	return cnt;
}
int main() {
	int n;
	scanf("%d", &n);
	int res =0;
	for (int i = 1; i <= n; i++) {
		res += get_digit(i);
	}
	printf("%d", res);
}
