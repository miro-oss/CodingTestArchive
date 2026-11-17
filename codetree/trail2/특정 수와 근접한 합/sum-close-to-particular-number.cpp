#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int S, N;
    cin >> N >> S;

    vector<int> A(N, 0);

    int sum = 0;

    for(int i = 0; i < N; i++){
        cin >> A[i];
        sum += A[i];
    }

    int m = INT_MAX;

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            int T = sum - A[i] - A[j];
            m = min(m, abs(T-S));
        }
    }

    cout << m;
    return 0;
}