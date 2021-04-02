#include <iostream>
#include<stdio.h>
using namespace std;
/*
해결방법 : 
1. 문자열을 담을 수 있는 자료구조는 char형 배열과 string형 객체 두개인 것 같다. 
2. scanf() 함수를 이용할때
    - %c 문자하나를 입력받음
	- %s 문자열을 입력받음
3.배열 선언과 동시에 초기화 하는 경우 혹은 배열을 매개변수로 넣는 경우
    - char message[] = "hello world";
    - void foo ( char array[] ); 에만 배열의 크기를 생략할 수 있다. 
4. char 데이터 타입에 저장된 숫자를 우리가 아는 정수형으로 바꾸려면 -48을 해야한다 
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
