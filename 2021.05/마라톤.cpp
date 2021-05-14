#include<stdio.h>
#include<vector>
using namespace std;
/*해결방법
i번째 원소는 0부터 i-1까지 for문을 돌면서 큰 수가 있으면 cnt++ 
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
