#include<bits/stdc++.h>

using namespace std;
/*
�ۼ��� : ������
�ۼ��� : 2021 03 19
�ذ� ���:
1. for���� �ι� ������ �ð� ���⵵�� n^2 �̹Ƿ� �ð� �ʰ��� ����
2. 30000 * 30000 �̸� 1�� �ȿ� �ذ��� �ȵȴ� 
3. for(int j=i; j<=n; j=j+i)��� �ݺ����� �̿��ϸ� �ð� ���⵵�� ũ�� ���� �� ���� 
*/
int n;
int arr[50004];

int main(void) {
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j=j+i){
			arr[j]+=1;
		} 
	}
	for(int i=1; i<=n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
