#include<iostream>

using namespace std;
int n,m;

//m�� ��������� �Ǻ��ϴ� �Լ�
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
