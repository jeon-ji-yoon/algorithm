#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
/*
�������� : �׸���(�ż������� ���� ������ ��츦 �ľ��ϴ� ��) 
*/
using namespace std;

int n , m ,k; //m�� �� ����� ���� ���̳� 
int cnt = 0;
int res = 0;


int main(void){
	
	
	
	cin >> n>> m>>k;
	vector<int> v(n); //�̰� ���� �����μ��� �ȵǳ� 
	for(int i=0; i<n; i++){
		std::cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	while( true){
		for(int i=0; i<k; i++){
			res += v[n-1];
			
			cnt += 1; //���⼭ ��������� 
			if(cnt == m){
				break; 
			} 
			
		}
		res+=v[n-2];
		cnt +=1;
		if(cnt == m){
			break; 
		} 
	}
	cout << res;
	
	
	return 0;
}
