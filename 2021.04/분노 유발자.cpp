#include<bits/stdc++.h>
using namespace std;
/*�ذ��� 
1. �迭�� �� ���� �ε������� ī�����ϸ鼭 
max���� ���ŵɶ����� cnt++ ���ش�.
2. ��� �Ǹ����� �ε����� max���� �� �� ����. 
��) 56 46 55 (76) (65) 53 52 53 (55) 50 
���⼭ ()ģ ���� ī��Ʈ�Ѵ�  
*/
int main(){
	int n, h[101], max=-2147000000,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &h[i]);
	}
	for(int i=n-2; i>=0; i--){
	    if(max < h[i]){
	    	max = h[i];
	    	cnt++;
		}
	}
    printf("%d\n", cnt);
}
