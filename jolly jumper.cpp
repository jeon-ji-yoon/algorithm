#include<bits/stdc++.h>
/*�ذ��� 
1. ���ʹ� �ڵ����� ���Ұ� 0���� �ʱ�ȭ�� �Ǵ±��� �ű��ϴ�. 
2.return���� main�Լ�  ���� 
3. pre �� now�̿� 
4. &&�� ���������� ����� 
*/
using namespace std;
int main(){
	int n, pre, now;
	scanf("%d", &n);
	vector<int> ch(n); 
	scanf("%d", &pre);
	for(int i=0; i<n-1; i++){
		scanf("%d", &now);
		int temp=pre - now; temp = abs(temp);
		if( temp>0 && temp <n&&ch[temp] == 0) {
			ch[temp]++;
		}
		else{
			printf("NO"); return 0;
		}
		pre = now;
	}
	printf("YES"); 
	return 0;
}
