#include<bits/stdc++.h>
using namespace std;
/* 해결방법 
1. sound를 하나하나씩 입력받으면서 m보다 크면 cnt++ 를 하고
m이하이면 cnt=0을 해준다. 
2. 또한 sound를 하나하나 입력받고 cnt++ 또는 cnt=0을 한 뒤 max값인지 체크한다. 
*/
int main(){
	int n,m,cnt=0,maxv = -2147000000;
	int res[101] = {0,};
	
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++){
		int sound;
		scanf("%d", &sound);
		if(sound > m){
			cnt++;
		}
		else{
			cnt=0;
		}
		if(cnt > maxv) maxv= cnt;
		
	}
	if(maxv == 0) printf("-1");
	else printf("%d", maxv);
	return 0;
}
