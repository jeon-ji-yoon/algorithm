#include<bits/stdc++.h>
using namespace std;
/*�ذ��� 
1. '('�� ���� == ')'�� ����
2. ')'�� ������ '('�� ������ ���� ��� NO�� ����Ѵ� 
3. �ڷᱸ�� '����'�� ����ؼ��� Ǯ �� �ִ�. 
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
