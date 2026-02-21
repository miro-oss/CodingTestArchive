#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int C;
    cin >> C;

    cout << fixed << setprecision(3);

    while (C--) {
        int N;
        cin >> N;

        vector<int> scores(N);
        double sum = 0.0;
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
            sum += scores[i];
        }

        double avg = sum / N;

        int cnt = 0;
        for (int x : scores) {
            if (x > avg) cnt++;
        }

        double percent = (double)cnt * 100.0 / N;
        cout << percent << "%\n";
    }

    return 0;
}