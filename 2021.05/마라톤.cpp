#include<stdio.h>
#include<vector>
using namespace std;
/*�ذ���
i��° ���Ҵ� 0���� i-1���� for���� ���鼭 ū ���� ������ cnt++ 
*/
int main(){
	int n; scanf("%d", &n);
	vector<int> a(n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		
	}
	for(int i=0; i<n; i++){
		int cnt=0;
		for(int j=0; j<i; j++){
			
		    if(a[i] <= a[j]) cnt++;
	    }
	    printf("%d ", cnt+1);
	    
	}
	
	return 0;
}
