#include <bits/stdc++.h>
/*�ذ��� 
1. char�� ���ڿ��� �Է��� �޴´�
2. �ƽ�Ű�ڵ�(0�� 48)�� Ȱ���Ѵ� 
3. ���� ������ ������ ū ���� ����ؾ� �ϹǷ� <= �� ����Ѵ� 
*/
using namespace std; 
int main() {
	char c[101]; int res,maxN = -2147000000; int arr[10]  ={0,};
	scanf("%s", c);
	for(int i=0; c[i]!='\0'; i++){
		int temp=c[i]-48;
		arr[temp]++;
	}
	for(int i=0; i<10; i++){
		if(maxN <= arr[i]) {
			maxN = arr[i];
			res = i;
		}
	}
	printf("%d", res);
}
