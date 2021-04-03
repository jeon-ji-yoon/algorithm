#include<bits/stdc++.h>
using namespace std;
/*
1. scanf ( "% s", str)를 사용하여 C에서 문자열 입력을받을 수 있습니다. 
그러나 첫 번째 공백을 찾을 때까지만 문자열을 허용합니다.
2. gets() 사용 
3. res배열의 마지막에 널을 넣어주어야함 
*/
int main(){
	char c[101];char res[101];
	gets(c);
	int temp=0;

	for(int i=0; c[i]!='\0'; i++){
		if(c[i]!=' ') {
			if(c[i]>=65 && c[i]<=90 ){
				res[temp] = c[i] + 32;
				temp++;
			}
			if(c[i] >= 97 && c[i]<= 122){
				res[temp] = c[i];
				temp++;
			}
		}	
	}
	res[temp] = '\0';
	printf("%s", res);
	
	
}
