#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int R, C;
    cin >> R >> C;

    vector<vector<char>> color(R, vector<char>(C, ' '));
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> color[i][j];
        }
    }

    int cnt = 0;

    for(int i = 1; i < R; i++){
        for(int j = 1; j < C; j++){
            if(color[0][0] != color[i][j]){
                for(int k = i+1; k < R-1; k++){
                    for(int l = j+1; l < C-1; l++){
                        if(color[i][j] != color[k][l] && color[k][l] != color[R-1][C-1]){
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;


    return 0;
}