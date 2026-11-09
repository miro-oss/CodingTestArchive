#include <bits/stdc++.h>
using namespace std;

bool IsRange(int x, int y, int n){
    if(x >= 0 && x < n && y >= 0 && y < n){
        return true;
    }else return false;
}

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int A[100][100] = {0, 0};

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }

    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int cnt = 0;
            for(int dir_num = 0; dir_num < 4; dir_num++){
                int nx = i + dx[dir_num], ny = j + dy[dir_num];                        if(IsRange(nx, ny, N) && A[nx][ny] == 1){
                    cnt++;
                }
            }
            if(cnt >= 3){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}