#include<bits/stdc++.h>
using namespace std;
/*
�ۼ��� : ������
�ۼ���20210331
�ذ��� : 
1. �ּ���(�ֻ��� ��忡 ���� ���� ���� �����ϴ� ����Ʈ��)�ڷᱸ���� Ȱ���Ѵ�.
2. �� �ڷᱸ���� �̿��ϰ� �Ǹ�, ���ǰ� ������ �ð� �� ���� �̸� �ð��� �׻� �ֻ��� ��忡 ���� �� �ִ�.
3. �ֻ��� ����� ���ǽð����� �ʰ� �����ϴ� ������ ���, ���ο� ���ǽ��� ������ �ʿ䰡 ����
4. �׷��� �ֻ�� ����� ���ǽð����� �̸��� �����ϴ� ������ ��� ���ο� ���ǽ��� �����Ͽ����Ѵ� 
*/
int main()
{
	int n;
	pair<int, int>p[200001];
	priority_queue<int, vector<int>, greater<int>> pq; //�ּ� �� �ڷᱸ���� ������ 
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
