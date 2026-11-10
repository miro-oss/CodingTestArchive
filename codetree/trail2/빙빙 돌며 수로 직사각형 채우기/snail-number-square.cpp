#include <bits/stdc++.h>
using namespace std;

bool IsRange(int x, int y, int n, int m){
    if(x >= 0 && x < n && y >= 0 && y < m){
        return true;
    }else{
        return false;
    }
}

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    int x = 0;
    int y = 0;
    int dir_num = 0;
    int answer[N][M] = {};

    answer[0][0] = 1;

    for(int i = 2; i <= N*M; i++){
        int nx = x + dx[dir_num], ny = y + dy[dir_num];

        if(!IsRange(nx, ny, N, M) || answer[nx][ny] != 0){
            dir_num = (dir_num + 1) % 4;
        }

        x += dx[dir_num];
        y += dy[dir_num];
        answer[x][y] = i;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}