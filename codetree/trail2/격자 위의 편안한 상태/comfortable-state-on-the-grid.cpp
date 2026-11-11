#include <bits/stdc++.h>
using namespace std;

bool IsRange(int x, int y, int n){
    if(x >= 1 && x <= n && y >= 1 && y <= n){
        return true;
    }else return false;
}

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N+1, vector<int>(N+1, 0));
    vector<int> Con;

    for(int i = 0; i < M; i++){
        int r, c;
        cin >> r >> c;

        A[r][c] = 1;
        int count = 0; 

        int cnt = 0;
        for(int dir = 0; dir < 4; dir++){
            int x = r + dx[dir], y = c + dy[dir];
            if(IsRange(x, y, N) && A[x][y] == 1){
                cnt++;
            }
        }
            
        if(cnt == 3){
            Con.push_back(1);
        }else{                
            Con.push_back(0);
        }
    }

    for(int i = 0; i < M; i++){
        cout << Con[i] << '\n';
    }

    return 0;
}