#include <bits/stdc++.h>

using namespace std;
/*
��ȹ�� ��� �̵������� �����ϰ� �Ǵ� ��ǥ�� ���ϴ� ����*/

int n;
string plans;
int x = 1;
int y = 1; // x��ǥ�� y��ǥ�� ��Ÿ����
char dir[4] = {'U','D','L','R'};
int moveY[4] = {0, 0,-1,1};
int moveX[4]={-1,1,0,0};

int main(void){
	cin >> n;
    cin.ignore(); // ���� ���� 
    getline(cin, plans);
    // �̵� ��ȹ�� �ϳ��� Ȯ��
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
