#include <iostream>
#include<stdio.h>

/*해결방법
1. 아스키코드 숫자는 48부터 56까지, 알파벳대문자는 65부터, 알파벳소문자는 97부터 
2. '\0' 은 널을 나타낸다 
3. res = res*10 + (c[i]-48) --> 이 알고리즘을 기억하자  
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
