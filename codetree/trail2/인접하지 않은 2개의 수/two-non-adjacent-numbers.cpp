#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    vector<int> A(N, 0);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int m = INT_MIN;

    for(int i = 0; i < N; i++){
        for(int j = i + 2; j < N; j++){
            m = max(m, A[i] + A[j]);
        }
    }

    cout << m;
    return 0;
}