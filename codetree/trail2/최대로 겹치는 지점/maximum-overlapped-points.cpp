#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int OFFSET = 100;
    vector<int> line(1001, 0);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        a += OFFSET;
        b += OFFSET;

        for (int j = a; j <= b; j++) {
            line[j]++;
        }
    }

    int M = 0;
    for (int k = 0; k < line.size(); k++) {
        if (M < line[k]) {
            M = line[k];
        }
    }

    cout << M;
    return 0;
}