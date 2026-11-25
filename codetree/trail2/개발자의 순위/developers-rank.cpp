#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int K, N;
    cin >> K >> N;

    vector<vector<int>> P(K, vector<int>(N, 0));

    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            cin >> P[i][j];
        }
    }
    int cnt = 0;

    for(int i = 0; i < N; i++){
        int a = P[0][i];

        for(int j = i+1; j < N; j++){
            int b = P[0][j];
            bool check = true;

            for(int k = 1; k < K; k++){
                int rankA = 0;
                int rankB = 0;

                for(int l = 0; l < N; l++){
                    if(P[k][l] == a){
                        rankA = l;
                    }

                    if(P[k][l] == b){
                        rankB = l;
                    }
                }

                if(rankA > rankB){
                    check = false;
                    break;
                }
            }
            if(check) cnt++;
        }
    }

    cout << cnt;
    return 0;
}