#include <bits/stdc++.h>
using namespace std;
/*해결방법
1. n의 범위가 3<n<1000000000 이므로 타임 리미트를 주의하며 풀어야한다 
=> get_digit 함수를 작성하면 시간이 너무 오래걸린다 

2. 한자릿수의 갯수 : 9개
   두자릿수의 갯수 : 99개
   세자릿수의 갯수 : 999개
   네자릿수의 갯수 : 9999개...
   
   그래서 (n자릿수의 갯수)*n 을 res에 계속 더해주어야 한다.
  
3. while문을 탈출하면 (n-sum)*(자릿수) 를 res에 더하고 프로그램 종료한다. 
*/
int main() {
	int n, cnt=1, res=0, i=9, sum=0; 
	scanf("%d", &n);
	while( n > i+sum ){
		res = res + (i*cnt); //예를 들어 두자릿수이면 90 * (2) 
		sum += i;
		i = i*10;
		cnt++;		
    }
    n=n-sum;
    res+= n* cnt;
    printf("%d", res);
}
