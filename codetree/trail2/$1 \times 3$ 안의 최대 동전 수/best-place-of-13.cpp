#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<vector<int>>coin (N, vector<int>(N, 0));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> coin[i][j];
        }
    }

    int max_c = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-2; j++){
            max_c = max(max_c, coin[i][j]+coin[i][j+1]+coin[i][j+2]);
        }
    }

    cout << max_c;

    return 0;
}