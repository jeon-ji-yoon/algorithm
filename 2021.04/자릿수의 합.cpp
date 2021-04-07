#include <bits/stdc++.h>
using namespace std;
/*
해결방법 : 
1. 자연수의 자릿수의 합을 구하는 digit_sum 함수를 작성한다 
2. else if를 사용하여 max1와 sum이 같을 경우에는, max2와 num을 비교하여
더 큰값을 max2에 담는다  
*/
int digit_sum(int x) {
	int sumN = 0;
	while(true){			 
		if(x/10 == 0){
			sumN += x%10;
			break;
		}
		else{
		    sumN +=x % 10;
		}
		x = x/10;
	}
    return sumN;
}

int main() {
	freopen("input.txt", "rt", stdin);
	int n,sum;
	int max1 = -2147000000;
	int max2 = -2147000000;
	int num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		sum = digit_sum(num) ;
		if(  max1< sum     ){
			max1 = sum;
			max2 = num;
		}
		else if(max1 == sum){
			if(max2 < num){
				max2=num;
			}
		}
		
	}
	printf("%d", max2);
}
