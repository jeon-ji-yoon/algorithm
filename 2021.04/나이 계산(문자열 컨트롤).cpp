#include <iostream>
#include<stdio.h>
using namespace std;
/*
�ذ��� : 
1. ���ڿ��� ���� �� �ִ� �ڷᱸ���� char�� �迭�� string�� ��ü �ΰ��� �� ����. 
2. scanf() �Լ��� �̿��Ҷ�
    - %c �����ϳ��� �Է¹���
	- %s ���ڿ��� �Է¹���
3.�迭 ����� ���ÿ� �ʱ�ȭ �ϴ� ��� Ȥ�� �迭�� �Ű������� �ִ� ���
    - char message[] = "hello world";
    - void foo ( char array[] ); ���� �迭�� ũ�⸦ ������ �� �ִ�. 
4. char ������ Ÿ�Կ� ����� ���ڸ� �츮�� �ƴ� ���������� �ٲٷ��� -48�� �ؾ��Ѵ� 
*/
int main() {
	freopen("input.txt", "rt", stdin); 
	char c[15];
	scanf("%s", c);
	int year, age;
	if(c[7] == '1' || c[7] == '2') year = 1900+((c[0]-48)*10 + (c[1]-48) );
	else year = 2000+ ((c[0]-48)*10 + (c[1]-48) );
	age = 2019 - year +1;
	printf("%d ", age);
	if(c[7] == '1' || c[7] == '3') printf("M");
	else printf("W");
	
}
