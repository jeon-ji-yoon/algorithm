#include<bits/stdc++.h>
using namespace std;
/*
1. sum�� ��Ÿ���� s���� �ϳ��� ������ ����  ���� �ϳ��� ������ ���� �����ش� 
�׷��� Ÿ�� ����Ʈ�� �� ���´�. 
2. ���� == �迭  
*/
int main(){
	int n , k , s=0 , max;
	
	scanf("%d %d", &n, &k );vector<int> v(n);
	for(int i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for(int i=0; i<k; i++){
		s+=v[i];
		max = s;
	}
	for(int i=k; i<n; i++){
		
		s+= v[i];
		s-=v[i-k];
		if(max < s) max = s;
	} 
	printf("%d\n", max);
	return 0; 
}
