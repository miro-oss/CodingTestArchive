#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 1, 1}, dy[4] = {1, 0, 1, -1};

int main() {
    // Please write your code here.
    vector<vector<int>> A(19, vector<int>(19, 0));

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            if(A[i][j]==0){
                continue;
            }
            for(int dir = 0; dir < 4; dir++){
                int k = 0;
                bool f = true;

                while(k < 5){
                    int nx = i + dx[dir]*k;
                    int ny = j + dy[dir]*k;

                    if(nx < 0 || nx >= 19 || ny < 0 || ny >= 19){
                        f = false;
                        break;
                    }

                    if(A[nx][ny] != A[i][j]){
                        f = false;
                        break;
                    }
                    k++;
                }
                if(f){
                    cout << A[i][j] << '\n';
                    cout << i + dx[dir] * 2 + 1 << " " << j + dy[dir]*2 +1;
                    return 0;
                }
            }
        }
    }

    cout << 0;


    return 0;
}