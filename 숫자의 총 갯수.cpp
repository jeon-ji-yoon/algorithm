#include<stdio.h>
/*�ذ���
1. 1���� 15���� 1,2,3,4,5,6,7,8,9(9��)10 11 12 13 14 15 (12��) ��21���� ���ڰ� ���δ� 
2. 1���� n���� for���� ���鼭 ������ ������ get_digit() �Լ��� �����ؼ� �ڸ����� ������ 
res �� ��ģ��. 
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
