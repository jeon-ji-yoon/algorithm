#include<bits/stdc++.h>
using namespace std;
/*�ذ���
1. for���� �������� �׻� sum=0���� �ʱ�ȭ�ؾ��Ѵ�.
2. ����������� ����ϸ�, �л� �Ѹ��� ������ �Է¹��� ������ YES
�Ǵ� NO�� ����ϴ� ������� ���α׷��� �ۼ��ص� �ȴ�. 
*/
int main(){
	freopen("input.txt", "rt", stdin);
	int n, number, ans, sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &number, &ans);
		for(int j=1; j<= number; j++){
			sum+=j;
		}
		if(sum == ans) printf("YES\n");
		else printf("NO\n");
		sum=0;
	} 
}
