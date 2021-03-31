#include<bits/stdc++.h>
using namespace std;
/*
작성자 : 전지윤
작성일20210331
해결방법 : 
1. 최소힙(최상위 노드에 가장 작은 수가 오게하는 이진트리)자료구조를 활용한다.
2. 이 자료구조를 이용하게 되면, 강의가 끝나는 시간 중 가장 이른 시간을 항상 최상위 노드에 넣을 수 있다.
3. 최상위 노드의 강의시간보다 늦게 시작하는 강의의 경우, 새로운 강의실을 개설할 필요가 없다
4. 그러나 최상단 노드의 강의시간보다 이르게 시작하는 강의의 경우 새로운 강의실을 개설하여야한다 
*/
int main()
{
	int n;
	pair<int, int>p[200001];
	priority_queue<int, vector<int>, greater<int>> pq; //최소 힙 자료구조를 구현함 
	cin >> n;
	for(int i=0; i<n; i++){
		int temp1, temp2;
		cin>>temp1>>temp2;
		p[i].first = temp1; p[i].second = temp2;
	}
	sort(p, p+n);
    pq.push(p[0].second);	
	for(int i=1; i<n; i++){
		if( pq.top()<=p[i].first ){
			pq.pop();
			pq.push(p[i].second);
		}
		else{
			pq.push(p[i].second);
			
		}
	} 
	cout<<pq.size();
}
