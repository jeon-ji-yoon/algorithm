#include<bits/stdc++.h>
using namespace std;
/*�ذ��� 
����ؼ� n��° ���� n+1�� ���� ���ϸ� �����ϴ��� �Ǵ��Ѵ�
�������� ������ cnt=1�� �ʱ�ȭ�Ѵ�.
n�� pre�� n+1�� now��� ������ ��� ������ n+1�� pre�� ��� �������
�ص� ��. 
*/
int main(){
	int n,cnt=1,max=-2147000000;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		if(a[i] <= a[i+1]) {
			cnt++;
		}
		else{
			if(cnt > max) max = cnt;
			cnt=1;
		}
 	}
 	printf("%d", max);
}
