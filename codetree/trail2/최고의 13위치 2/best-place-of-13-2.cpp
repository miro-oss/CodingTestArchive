#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }

    int n = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= N-3; j++){
            for(int x = 0; x < N; x++){
                for(int y = 0; y <= N-3; y++){
                    int cnt = 0;
                    if(i != x || j + 3 <= y || y + 3 <= j){
                        for(int k = j; k < j+3; k++){
                            cnt += A[i][k];
                        }

                        for(int k = y; k < y+3; k++){
                            cnt += A[x][k];
                        }
                    }
                    n = max(n, cnt);
                }
            }
        }
    }

    cout << n;
    return 0;
}