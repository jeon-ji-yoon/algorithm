#include<bits/stdc++.h>
using namespace std;
/* �ذ��� 
1. sound�� �ϳ��ϳ��� �Է¹����鼭 m���� ũ�� cnt++ �� �ϰ�
m�����̸� cnt=0�� ���ش�. 
2. ���� sound�� �ϳ��ϳ� �Է¹ް� cnt++ �Ǵ� cnt=0�� �� �� max������ üũ�Ѵ�. 
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
