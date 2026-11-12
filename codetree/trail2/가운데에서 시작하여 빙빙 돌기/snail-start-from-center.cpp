#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int md = (N-1)/2;
    int answer[N][N]={ };
    int x = md, y = md, dir = 0;

    answer[x][y] = 1;

    int len = 1, cnt = 0, turn = 0;

    for(int i = 2; i <= N*N; i++){                
        x += dx[dir];
        y += dy[dir];
        answer[x][y] = i;
        cnt++;

        if(cnt == len){
            dir = (dir + 3) % 4;
            cnt = 0;
            turn++;

            if(turn % 2 == 0){
                len++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}