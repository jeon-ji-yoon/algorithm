#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
�ۼ��� : 2021 03 13
�ۼ��� : ������ 
�������� : �׸���
�����ذ�:
1. ������ �迭�� �ȸ����. ��� ���پ� �Է¹��� ������ ó���Ѵ�
*/
using namespace std;
int n,m; //n�� ���� ���� 
int res = -100;
int main(void){
	cin >> n>>m;
	for(int i=0; i<n; i++){
		vector<int> v;
		for(int j=0; j<m; j++) {
			int x;
			cin >> x;
			v.push_back(x);
			
		}
		sort(v.begin(), v.end());
		int temp = v[0];
		if(temp > res){
			res = temp;
			
		}
		
	}
	cout << res;
	
	return 0;
}
