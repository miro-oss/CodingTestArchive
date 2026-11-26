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

    int ans = -1;

    for(int i = 0; i < N; i++){
        int a = A[i];
        for(int j = 0; j < N; j++){
            if(i == j) continue;

            int b = A[j];

            if(a == b && abs(i-j) <= K){
                ans = max(a, ans);
            }
        }
    }

    cout << ans;
    return 0;
}