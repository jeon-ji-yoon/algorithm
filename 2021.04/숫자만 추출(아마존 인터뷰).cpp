#include <iostream>
#include<stdio.h>

/*�ذ���
1. �ƽ�Ű�ڵ� ���ڴ� 48���� 56����, ���ĺ��빮�ڴ� 65����, ���ĺ��ҹ��ڴ� 97���� 
2. '\0' �� ���� ��Ÿ���� 
3. res = res*10 + (c[i]-48) --> �� �˰����� �������  
*/
using namespace std;
int main() {
	char c[51];
	scanf("%s", c );
	int res = 0;int cnt=0;
	for(int i=0; c[i]!='\0'; i++){
		if(c[i] <=57 && c[i]>= 48 ){
			res = res*10 + (c[i]-48);
		
		}
	}
	for(int i=1; i<=res; i++){
		if(res%i==0){
			cnt+=1;
		}
	}
	printf("%d\n", res);
	printf("%d", cnt);
	
}
