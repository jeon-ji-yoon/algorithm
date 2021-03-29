#include<bits/stdc++.h>
/*
�ۼ��� : 2021 03 25
�ۼ��� : ������
�ذ���: 
1. endTm ���� begin�� ũ�鼭 ���ÿ� ȸ�ǰ� ������ �ð��� ���� ª�� ���� ���ؾ��Ѵ� 
2. array�� ����ϸ�, �迭�� ũ�� ������ �ָ��ϰ� sort�ϱ⵵ ��ƴ�. �׷��� vector�� ����ϸ� ���� �� ����.
3. ȸ�ǰ� �ִ��� ���� ������ �׸��� ���ַ� �����ϴ� ������� Ǫ�� ���� �ٶ����ϴ�. 
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
