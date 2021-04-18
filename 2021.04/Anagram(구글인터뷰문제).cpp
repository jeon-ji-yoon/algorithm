#include<bits/stdc++.h>
using namespace std;
/*해결 방법
1. 아스키 코드는 알파벳 대문자가 65부터 90, 알파벳 소문자가 97부터 122이다 
아스키 코드를 이용해서 문자열의 구성을 파악한다. 
2. exit(0) 을 하면 프로그램 종료 
*/
int main(){
	char c1[101], c2[101];
	int res1[60] = {0,}, res2[60] = {0,};
	scanf("%s %s", c1,c2);
	for(int i=0; c1[i]!='\0'; i++){
		if(c1[i] >=97 && c1[i] <= 122 ){
			int temp = c1[i]-71;
			res1[temp]+=1;
		}
		else{
			int temp = c1[i]-65;
			res1[temp]+=1;
		}
	}
	for(int i=0; c2[i]!='\0'; i++){
		if(c2[i] >=97 && c2[i] <= 122 ){
			int temp = c2[i]-71;
			res2[temp]+=1;
		}
		else{
			int temp = c2[i]-65;
			res2[temp]+=1;
		}
	}
	for(int i=0; i<60; i++){
		if(res1[i] != res2[i]){
		    printf("NO");
			exit(0); 
		}
	}
	printf("YES"); 
}
