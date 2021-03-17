#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, dir;
int d[50][50]; //�湮��� üũ�ϴ� ��� 
int arr[50][50];
//��, ��, ��, �� �������� �̵��Ҽ��ְ��Ѵ� 
int moveX[] = {-1, 0, 1, 0};
int moveY[] = {0, 1, 0, -1};

void turn_left() {
    dir -= 1;
    if (dir == -1) dir = 3;
}

int main(void) {
    cin >> n >> m;
    cin >> x >> y >> dir;
    d[x][y] = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }


    int res = 1; //���� ĭ�� �湮ó���� 
    int turn_time = 0;
    
    while (true) {
        turn_left();
        int nx = x + moveX[dir];
        int ny = y + moveY[dir];
        
        if (d[nx][ny] == 0 && arr[nx][ny] == 0) {
            d[nx][ny] = 1;
            x = nx;
            y = ny;
            res += 1;
            turn_time = 0;
            continue;
        }
        else turn_time += 1;
        
        if (turn_time == 4) {
            nx = x - moveX[dir];
            ny = y - moveY[dir];
            
            if (arr[nx][ny] == 0) {
                x = nx;
                y = ny;
            }
            else break;
            turn_time = 0;
        }
    }

    cout << res;
}
