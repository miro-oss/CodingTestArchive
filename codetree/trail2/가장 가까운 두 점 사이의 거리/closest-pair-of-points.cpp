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

    int dis = INT_MAX;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            int x = (A[i].first - A[j].first) * (A[i].first - A[j].first);
            int y = (A[i].second - A[j].second) * (A[i].second - A[j].second);

            dis = min(dis, x+y);
        }
    }

    cout << dis;
    return 0;
}