#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;

    vector<int> A(N, 0);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int m = INT_MIN;

    for(int i = 0; i <= N - K; i++){
        int sum = 0;
        for(int j = i; j < i+K; j++){
            sum += A[j];
        }
        m = max(sum, m);
    }

    cout << m;
    return 0;
}