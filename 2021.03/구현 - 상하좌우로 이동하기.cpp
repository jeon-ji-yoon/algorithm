#include <bits/stdc++.h>

using namespace std;
/*
계획서 대로 이동했을때 도착하게 되는 좌표를 구하는 문제*/

int n;
string plans;
int x = 1;
int y = 1; // x좌표와 y좌표를 나타낸다
char dir[4] = {'U','D','L','R'};
int moveY[4] = {0, 0,-1,1};
int moveX[4]={-1,1,0,0};

int main(void){
	cin >> n;
    cin.ignore(); // 버퍼 비우기 
    getline(cin, plans);
    // 이동 계획을 하나씩 확인
    for (int i = 0; i < plans.size(); i++) {
        char plan = plans[i]; 
    
        for (int j = 0; j < 4; j++) {
            if (plan == dir[j]) {
            	if (x+moveX[j]  >0 && y+moveY[j] >0  &&   x+moveX[j]  <n+1 && y+moveY[j] <n+1) {
            		
            		x = x + moveX[j];
                    y = y + moveY[j];
            		
				}
                
            }
        }
      
    }
    cout<<x<<" "<<y;

	
	
	
	return 0;
}
