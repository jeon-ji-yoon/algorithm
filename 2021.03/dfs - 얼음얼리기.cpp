#include <bits/stdc++.h>

using namespace std;


int n, m;
int graph[1000][1000];
int cnt;
//�湮ó���� �ϴ� dfs�ΰ� 
bool dfs(int i, int j){
	//i�� �� ������, j�� �� ������ ��Ÿ���� 
	if(i <= -1 || i >=n || j <= -1 || j >= m){
		//��ǥ�� ������ ��� ��� false �� ��ȯ�Ѵ�
		return false; 
	}
	else{
		if(graph[i][j] == 0 ){
			//�� ĭ�� �湮���� ���� ��쿡�� 
			// �湮ó���� �� �� �����¿쿡 ���ؼ� dfs�� �����Ѵ� 
			graph[i][j] = 1;
			dfs(i-1,j);
			dfs(i+1,j);
			dfs(i, j-1);
			dfs(i,j+1);
			return true; //cnt += 1�� �� �� ������ ����ĭ�� �� �湮ó���� �Ѵ�ϴ�... 
	    }else{
	    	return false;  
		} 
		
		
		
    }
}

int main(void) {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d",&graph[i][j]);
            
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(dfs(i,j)== true ){
            	cnt +=1;
			}
        }
    
    }
	
	cout << cnt;
	return 0;   
}
