#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(1, 0);
    vector<int> B(1, 0);

    for (int i = 0; i < N; i++) {
        char direction;
        int duration;
        cin >> direction >> duration;

        int step = (direction == 'L' ? -1 : 1);

        for (int j = 0; j < duration; j++) {
            A.push_back(A.back() + step);
        }
    }

    for (int i = 0; i < M; i++) {
        char direction;
        int duration;
        cin >> direction >> duration;

        int step = (direction == 'L' ? -1 : 1);

        for (int j = 0; j < duration; j++) {
            B.push_back(B.back() + step);
        }
    }

    int totalTime = max(A.size(), B.size()) - 1;

    // 이동이 먼저 끝나면 마지막 위치에서 기다림
    A.resize(totalTime + 1, A.back());
    B.resize(totalTime + 1, B.back());

    // 출발 시점인 0초는 제외
    for (int t = 1; t <= totalTime; t++) {
        if (A[t] == B[t]) {
            cout << t << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';
    return 0;
}