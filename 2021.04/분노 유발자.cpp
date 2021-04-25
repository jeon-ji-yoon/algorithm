#include<bits/stdc++.h>
using namespace std;
/*해결방안 
1. 배열의 맨 뒤의 인덱스부터 카운팅하면서 
max값이 갱신될때마다 cnt++ 해준다.
2. 대신 맨마지막 인덱스는 max값이 될 수 없다. 
예) 56 46 55 (76) (65) 53 52 53 (55) 50 
여기서 ()친 값을 카운트한다  
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
