#include <bits/stdc++.h>
using namespace std;
/*
�ذ��� : 
1. �ڿ����� �ڸ����� ���� ���ϴ� digit_sum �Լ��� �ۼ��Ѵ� 
2. else if�� ����Ͽ� max1�� sum�� ���� ��쿡��, max2�� num�� ���Ͽ�
�� ū���� max2�� ��´�  
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
