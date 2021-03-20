#include<bits/stdc++.h>

using namespace std;
int a,b;
int cnt = 0;
int main(){
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		if(i == b){
		    cout<<i<<" = ";			
		}else{
			cout<<i<<" + ";
		}
		cnt += i;
	}
	cout<<cnt;
}
