#include<bits/stdc++.h>
using namespace std;
/*
1. scanf ( "% s", str)�� ����Ͽ� C���� ���ڿ� �Է������� �� �ֽ��ϴ�. 
�׷��� ù ��° ������ ã�� �������� ���ڿ��� ����մϴ�.
2. gets() ��� 
3. res�迭�� �������� ���� �־��־���� 
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
