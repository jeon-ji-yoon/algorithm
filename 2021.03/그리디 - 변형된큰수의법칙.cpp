#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
��¥ : 2021 3 12
�ڵ� § ��� : ������ 
�������� : �׸���(�ż������� ���� ������ ��츦 �ľ��ϴ� ��) 
���� Ǫ�� �� : 
1. �׸���� ������ �ϴ� ��찡 ���� 
2. ���� ū ���� �������� Ƚ�� �� �ι�°�� ū���� �������� Ƚ���� ���Ѵ� 
*/
using namespace std;

int n , m ,k; //m�� �� ����� ���� ���̳� 
int cnt = 0;
int res = 0;
vector<int> v;
int main(void){	
	cin >> n>> m>>k;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	
	int temp1 = m/(k+1);
	int temp2 = m%(k+1);
	int maxNum1 = v[n-1];
	int maxNum2 = v[n-2];
	res+= maxNum1 * (temp1*k + temp2);
	res += maxNum2 * (m -(temp1*k + temp2) );
	
	cout << res;
	return 0;
}
