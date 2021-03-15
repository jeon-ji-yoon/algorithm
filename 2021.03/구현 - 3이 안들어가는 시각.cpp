#include<iostream>
#include<stdio.h>

using namespace std;

int hour=0;
int minute=0;
int second=0;
int n;
int cnt = 0;
int main(void){
	cin>>n; //5시 59분 59초 까지 3이 안포함된 시간의 갯수는 몇개인가
	while(hour < n+1){
		second += 1;
		if(second == 60){
			second = 0;
			minute += 1;
		}
		if(minute == 60){
			minute = 0;
			hour +=1;
		}
		
		if(second/10 == 3 || second%10 == 3  || minute/10 == 3 || minute%10 == 3 || hour/10 == 3 || hour%10 == 3){
			cnt += 1;
			
		}
	} 
	cout << cnt;
	return 0; 
}
