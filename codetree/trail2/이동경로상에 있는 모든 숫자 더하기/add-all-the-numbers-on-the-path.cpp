#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool IsRange(int x, int y, int n){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    int N, T;
    cin >> N >> T;

    int md = (N-1)/2;
    int dir = 3, x = md, y = md;

    string S;
    cin >> S;

    vector<vector<int>> answer (N, vector<int>(N, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> answer[i][j];
        }
    }

    int sum = answer[md][md];

    for(int i = 0; i < T; i++){
        switch(S[i]){
            case 'R': dir = (dir + 1) % 4; break;
            case 'L': dir = (dir + 3) % 4; break;
            case 'F': 
                int nx = x + dx[dir], ny = y + dy[dir];
                if(IsRange(nx, ny, N)){
                    x = nx;
                    y = ny;
                    sum += answer[x][y];
                }
                break;
        }
    }

    cout << sum;

    return 0;
}