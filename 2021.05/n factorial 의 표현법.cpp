#include<bits/stdc++.h>
/*
팩토리얼의 모든 요소를 각각 소인수분해한 후 check배열에 +1 한다
어려운 부분 : 2부터 나눠서 안되면 1증가
-> 6으로 나눠떨어지는 수는 2로도 나눠떨어짐 그래서 6까지 올라갈
일이 없음
-> 이런 방법으로 소인수를 걸러냄 
*/
using namespace std;
int main(){
	int n,j,tmp;
	scanf("%d", &n);
	vector<int> a(n+1);
	for(int i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(true){
			if(tmp % j == 0){
		    	tmp = tmp/j;
				a[j]++;
		
			}
			else j++;
			if(tmp == 1)break;
		}
	}
	printf("%d! = ", 5);
	for(int i=2; i<=n; i++){
	    if(a[i] !=0) printf("%d ", a[i]);
	}
}
