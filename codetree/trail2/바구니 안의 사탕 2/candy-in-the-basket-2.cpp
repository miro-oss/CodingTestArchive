#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;

    vector<int> A(301, 0);

    for(int i = 0; i < N; i++){
        int a;
        int x;
        cin >> a >> x;

        A[x] += a;
    }

    int m = INT_MIN;

    for(int j = 0; j < 301; j++){
        int sum = 0;
        for(int k = j - K; k <= j + K; k++){
            if(k >= 0 && k <= 100){
                sum += A[k];
            }
        }
        m = max(sum, m);
    }

    cout << m;

    return 0;
}