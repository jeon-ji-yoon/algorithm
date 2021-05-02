#include<bits/stdc++.h>
using namespace std;
/*
1. sum을 나타내는 s에서 하나의 원소의 값을  빼고 하나의 원소의 값을 더해준다 
그래야 타임 리미트가 안 나온다. 
2. 벡터 == 배열  
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
