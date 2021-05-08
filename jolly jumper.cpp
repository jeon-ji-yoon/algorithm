#include<bits/stdc++.h>
/*해결방법 
1. 벡터는 자동으로 원소가 0으로 초기화가 되는구나 신기하다. 
2.return으로 main함수  종료 
3. pre 와 now이용 
4. &&는 순차적으로 실행됨 
*/
using namespace std;
int main(){
	int n, pre, now;
	scanf("%d", &n);
	vector<int> ch(n); 
	scanf("%d", &pre);
	for(int i=0; i<n-1; i++){
		scanf("%d", &now);
		int temp=pre - now; temp = abs(temp);
		if( temp>0 && temp <n&&ch[temp] == 0) {
			ch[temp]++;
		}
		else{
			printf("NO"); return 0;
		}
		pre = now;
	}
	printf("YES"); 
	return 0;
}
