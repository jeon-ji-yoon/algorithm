#include<bits/stdc++.h>
using namespace std;
/*
1. 0�� ������ 2�� 5�� ����� �ִ����� ���� �����ȴ�
2. �ֳ��ϸ� 2*5=10�̱� �����̴�
3. ���� 2���̸� ���� 2���� 
4. 1000! �� int�� �������� 
5. �ϴ� ������ �������� 0�̸� ch++, tmp == 1�̸� �극��ũ 
*/
int main(){
	int n, tmp, div;
	scanf("%d", &n);
	vector<int> ch(n+1);
	for(int i=2; i<=n; i++){
		tmp=i;
		div = 2;
		while(1){
			if(tmp % div ==0 ) {
				ch[div] ++;
				tmp = tmp/div; 
				div=2;
				
			}
			else div++;
			if( tmp == 1) break;
		}
	}
	
	if(ch[2] >= ch[5]) printf("%d", ch[5]);
	else printf("%d", ch[2]);
}
