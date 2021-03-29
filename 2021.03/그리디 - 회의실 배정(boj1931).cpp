#include<bits/stdc++.h>
/*
작성일 : 2021 03 25
작성자 : 전지윤
해결방법: 
1. endTm 보다 begin이 크면서 동시에 회의가 끝나는 시간이 가장 짧은 것을 택해야한다 
2. array를 사용하면, 배열의 크기 지정도 애매하고 sort하기도 어렵다. 그래서 vector를 사용하면 편할 것 같다.
3. 회의가 최대한 빨리 끝나는 항목을 위주로 선택하는 방식으로 푸는 것이 바람직하다. 
*/
using namespace std;
int n;
int cnt=0;
struct Time {
	int start;
	int end;
};

bool cmp(Time t1, Time t2) {
	if(t1.end ==t2.end){
		return t1.start < t2.start;
	}
	else{
		return t1.end < t2.end;
	}
}

int main(){
	cin>>n;
	vector <Time>vec(n);
	for(int i=0; i<n; i++){
		int x,y;
		scanf("%d %d",&x, &y );
	    vec[i].start = x;
	    vec[i].end=y;
	}
	sort(vec.begin(), vec.end(),cmp);
	int endTm = 0;
	
	for(int i=0; i<n; i++){
		if(endTm <= vec[i].start ){
			endTm = vec[i].end;
			cnt += 1;
		}
	}
	cout<<cnt;
}
