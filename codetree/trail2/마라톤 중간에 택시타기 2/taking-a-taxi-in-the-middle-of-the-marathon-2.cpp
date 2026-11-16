#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<pair<int, int>> run(1, {0, 0});

    for(int i = 0; i < N; i++){
        int x;
        int y;
        cin >> x >> y;

        run.push_back({x, y});
    }

    int x = run[1].first, y = run[1].second;
    int dist = 0;
    int m = INT_MAX;

    for(int i = 2; i <= N; i++){
        dist += abs(run[i-1].first - run[i].first) + abs(run[i-1].second - run[i].second);
    }

    for(int i = 2; i < N; i++){
        int d = dist;
        d = d - (abs(run[i-1].first - run[i].first) + abs(run[i-1].second - run[i].second)) - (abs(run[i].first - run[i+1].first) + abs(run[i].second - run[i+1].second)) + (abs(run[i-1].first - run[i+1].first) + abs(run[i-1].second - run[i+1].second));
        m = min(m, d);
    }

    cout << m;
    return 0;
}