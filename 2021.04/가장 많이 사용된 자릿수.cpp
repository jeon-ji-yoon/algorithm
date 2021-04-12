#include <bits/stdc++.h>
/*해결방법 
1. char형 문자열로 입력을 받는다
2. 아스키코드(0은 48)를 활용한다 
3. 사용된 갯수가 같으면 큰 수를 출력해야 하므로 <= 를 사용한다 
*/
using namespace std; 
int main() {
	char c[101]; int res,maxN = -2147000000; int arr[10]  ={0,};
	scanf("%s", c);
	for(int i=0; c[i]!='\0'; i++){
		int temp=c[i]-48;
		arr[temp]++;
	}
	for(int i=0; i<10; i++){
		if(maxN <= arr[i]) {
			maxN = arr[i];
			res = i;
		}
	}
	printf("%d", res);
}
