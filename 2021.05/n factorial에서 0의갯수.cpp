#include<bits/stdc++.h>
using namespace std;
/*
1. 0의 갯수는 2와 5가 몇쌍이 있는지에 따라 결정된다
2. 왜냐하면 2*5=10이기 때문이다
3. 쌍이 2쌍이면 영이 2개임 
4. 1000! 은 int에 못담을듯 
5. 일단 나눠서 나머지가 0이면 ch++, tmp == 1이면 브레이크 
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
