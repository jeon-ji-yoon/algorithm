#include<bits/stdc++.h>
using namespace std;
/*해결방법 
1. '('의 갯수 == ')'의 갯수
2. ')'의 갯수가 '('의 갯수를 넘을 경우 NO를 출력한다 
3. 자료구조 '스택'을 사용해서도 풀 수 있다. 
*/
int main(){
	char c[31];
	scanf("%s", c);
	int cnt=0;
	for(int i=0; c[i]!='\0'; i++  ){
		if(c[i] == '('){
			cnt += 1;
		}
		else{
			cnt -=1;
		}
		if(cnt < 0){
			break; 
		}
	}
	if(cnt == 0){
		printf("YES");
	}else{
		printf("NO");
	}
}
