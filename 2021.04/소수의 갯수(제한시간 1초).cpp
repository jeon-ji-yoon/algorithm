#include<bits/stdc++.h>
using namespace std;
/*해결방안 
1. 
예를 들어 36의 경우를 생각해보자
36의 약수를 살펴보면 1 2 3 4 6 6 9 12 18 36 이 있다
이때 나는 6을 두번 썼다. 왜나하면 36*(1/2) 가 6이기 때문이다.
즉 1부터 36*(1/2) 중의 수중에 36을 나눠서 나머지가 0인 수가 있으면
36은 소수가 아니게 된다. 
*/
int main(){
	int n,flag,cnt=0;
	scanf("%d", &n); //1부터 n까지 소수의 갯수를 출력한다 
	for(int i=2; i<=n; i++){
		flag = 1;
		for(int j=2; j*j<=i; j++){
			if(i%j == 0){
				flag = 0;
				break;
			}
		}
		if(flag == 1) cnt++; 
	}
	printf("%d", cnt);
}
