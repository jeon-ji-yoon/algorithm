#include<bits/stdc++.h>

using namespace std;

/*
�ۼ��� : 2021 03 20
�ۼ��� : ������ 
�ذ��� : 
1. bool isPrime(int x)�Լ��� int reverse(int x)�Լ��� �ۼ��Ѵ� 
2. int reverse(int x)�Լ��� �Ķ������ x�� %10 �ϰ� /10 �Ѵ�
������� x = 730�̶��, r = 730%10 �ϰ� x = x/10
�� �۾��� �ݺ��Ѵ�
�׸��� r*10 �̶�� �۾��� ���ش� 
*/


bool isPrime(int x){
	bool flag = true;
	for(int i=2; i<x; i++){
		if(x%i == 0){
			flag = false;
		    break;
			
		}
	}
	return flag;
}

int reverse(int x){
	int r=0; 
	while (x != 0) { 
		r = r*10 + x%10;
		x = x/10; 
	} 
	return r;
}

int n, input, temp ;
int arr[105];

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		scanf("%d", &input);
		temp = reverse(input);
		//if(�Ҽ��� ��쿡��)
		if(isPrime( temp) ) {
		    printf("%d ", temp);
		}		
	}	
}
