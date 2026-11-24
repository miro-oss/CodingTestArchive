#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<pair<int, int>> h(N, {0, 0});

    int end = 0;

    for(int i = 0; i < N; i++){
        cin >> h[i].first >> h[i].second;
        end = max(end, h[i].second);
    }

    int t = 0;

    for(int i = 0; i < N; i++){
        vector<int> work(end+1, 0);

        for(int j = 0; j < N; j++){
            if(j == i) continue;

            for(int k = h[j].first; k < h[j].second; k++){
                work[k] = 1;
            }
        }

        int h1 = 0;

        for(int k = 0; k < end; k++){
            h1 += work[k];
        }

        t = max(t, h1);
    }

    cout << t;

    return 0;
}