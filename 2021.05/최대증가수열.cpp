#include<bits/stdc++.h>
using namespace std;
/*해결방안 
계속해서 n번째 값과 n+1의 값을 비교하며 증가하는지 판단한다
증가하지 않으면 cnt=1로 초기화한다.
n을 pre에 n+1을 now라는 변수에 담고 비교한후 n+1을 pre에 담는 방식으로
해도 됨. 
*/
int main(){
	int n,cnt=1,max=-2147000000;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n-1; i++){
		if(a[i] <= a[i+1]) {
			cnt++;
		}
		else{
			if(cnt > max) max = cnt;
			cnt=1;
		}
 	}
 	printf("%d", max);
}
