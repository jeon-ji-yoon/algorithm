#include<bits/stdc++.h>
/*
���丮���� ��� ��Ҹ� ���� ���μ������� �� check�迭�� +1 �Ѵ�
����� �κ� : 2���� ������ �ȵǸ� 1����
-> 6���� ������������ ���� 2�ε� ���������� �׷��� 6���� �ö�
���� ����
-> �̷� ������� ���μ��� �ɷ��� 
*/
using namespace std;
int main(){
	int n,j,tmp;
	scanf("%d", &n);
	vector<int> a(n+1);
	for(int i=2; i<=n; i++){
		tmp=i;
		j=2;
		while(true){
			if(tmp % j == 0){
		    	tmp = tmp/j;
				a[j]++;
		
			}
			else j++;
			if(tmp == 1)break;
		}
	}
	printf("%d! = ", 5);
	for(int i=2; i<=n; i++){
	    if(a[i] !=0) printf("%d ", a[i]);
	}
}
