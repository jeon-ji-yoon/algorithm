#include<bits/stdc++.h>
using namespace std;
/*해결방안
1. for문의 마지막에 항상 sum=0으로 초기화해야한다.
2. 파일입출력을 사용하면, 학생 한명의 정보를 입력받을 때마다 YES
또는 NO를 출력하는 방식으로 프로그램을 작성해도 된다. 
*/
int main(){
	freopen("input.txt", "rt", stdin);
	int n, number, ans, sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &number, &ans);
		for(int j=1; j<= number; j++){
			sum+=j;
		}
		if(sum == ans) printf("YES\n");
		else printf("NO\n");
		sum=0;
	} 
}
