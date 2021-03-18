#include <bits/stdc++.h>

using namespace std;


int n, m;
int graph[1000][1000];
int cnt;
//방문처리를 하는 dfs인가 
bool dfs(int i, int j){
	//i는 몇 행인지, j는 몇 열인지 나타낸다 
	if(i <= -1 || i >=n || j <= -1 || j >= m){
		//좌표가 범위를 벗어난 경우 false 를 반환한다
		return false; 
	}
	else{
		if(graph[i][j] == 0 ){
			//그 칸이 방문하지 않은 경우에는 
			// 방문처리를 한 후 상하좌우에 대해서 dfs를 실행한다 
			graph[i][j] = 1;
			dfs(i-1,j);
			dfs(i+1,j);
			dfs(i, j-1);
			dfs(i,j+1);
			return true; //cnt += 1을 한 뒤 인접한 얼음칸은 다 방문처리를 한답니다... 
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
