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

    long long s = 0;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                int x1 = A[i].first, y1 = A[i].second;
                int x2 = A[j].first, y2 = A[j].second;
                int x3 = A[k].first, y3 = A[k].second;

                bool horizontal = (y1 == y2 || y1 == y3 || y2 == y3);
                bool vertical = (x1 == x2 || x1 == x3 || x2 == x3);
                if(!horizontal || !vertical) continue;

                long long ext = abs((1LL*x1*y2 + 1LL*x2*y3 + 1LL*x3*y1) - (1LL*x2*y1 + 1LL*x3*y2 + 1LL*x1*y3));
                s = max(s, ext);
            }
        }
    }

    cout << s;

    return 0;
}