#include<bits/stdc++.h>
/*
�ۼ��� : ������
�ۼ��� : 2021 03 21
�ذ��� : 
1. 1�� ��� ���� ��������� �̿��Ѵ� 
�׷��� 1�� ������ ��� for���� �����Ѵ�

2. n�̶�� ���� i�� ����� 0�̸� i�� n�� ����̴� 
*/
using namespace std;
int n;
int res=1;

int main(){
	cin>>n;
	printf("1" );
	
	for(int i=2; i<n; i++){
		if(n%i == 0){
			printf(" + %d", i);
			res += i;
			
		}
		
	}
	
	printf(" = %d", res);
}
