#include<iostream>

using namespace std;
int n,m;

//m의 배수인지를 판별하는 함수
bool isMultiple (int x){
	bool flag = false;
	if(x%m == 0){
		flag =  true;
	}
	return flag;
} 

int res=0;

int main(){
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		if(isMultiple(i)){
			res += i;
		}	
	}	
	cout<<res;
}
