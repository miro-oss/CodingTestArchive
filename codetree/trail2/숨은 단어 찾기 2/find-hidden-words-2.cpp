#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    vector<string> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i][j] == 'L'){
                for(int idx = 0; idx < 8; idx++){
                    int k = 1;
                    bool T = true;
                    while(k < 3){
                        int nx = i + dx[idx]*k, ny = j + dy[idx]*k;
                        
                        if(nx < 0 || nx >= N || ny < 0 || ny >= M){
                            T = false;
                            break;
                        }

                        if(A[nx][ny] != 'E'){
                            T = false;
                            break;
                        }
                        k++;
                    }
                    if(T){
                        cnt++;
                    }
                }
            }
        }
    }

    cout << cnt;


    return 0;
}