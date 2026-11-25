#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<pair<int, int>> A(N, {0, 0});

    for(int i = 0; i < N; i++){
        cin >> A[i].first >> A[i].second;
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){
        bool over = false;
        for(int j = 0; j < N; j++){
            if(j == i) continue;

            if((A[i].first < A[j].first && A[i].second > A[j].second) ||
                (A[i].first > A[j].first && A[i].second < A[j].second)){
                    over = true;
                }
        }
        if(!over) cnt++;
    }

    cout << cnt;
    return 0;
}