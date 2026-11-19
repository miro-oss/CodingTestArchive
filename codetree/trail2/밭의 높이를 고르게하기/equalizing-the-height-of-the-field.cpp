#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, H, T;
    cin >> N >> H >> T;

    vector<int> A(N, 0);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int c = INT_MAX;

    for(int i = 0; i <= N - T; i++){
        int sum = 0;
        for(int j = i; j < i + T; j++){
            sum += abs(A[j] - H);
        }
        c = min(c, sum);
    }

    cout << c;

    return 0;
}