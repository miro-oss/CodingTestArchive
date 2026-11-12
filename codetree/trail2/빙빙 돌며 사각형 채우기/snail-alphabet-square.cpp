#include <bits/stdc++.h>
using namespace std;

bool IsRange(int x, int y, int n, int m){
    return x >= 0 && x < n && y >= 0 && y < m;
}

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;
    vector<vector<char>> answer(N, vector<char>(M, ' '));

    int x = 0, y = 0, dir = 0;
    answer[0][0] = 'A';

    for(int i = 2; i <= N*M; i++){
        int nx = x + dx[dir], ny = y + dy[dir];
        
        if(!IsRange(nx, ny, N, M) || answer[nx][ny] != ' '){
            dir = (dir + 1) % 4;
        }

        x += dx[dir];
        y += dy[dir];
        answer[x][y] = 'A' + (i-1) % 26;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}