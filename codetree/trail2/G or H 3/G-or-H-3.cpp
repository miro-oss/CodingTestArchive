#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K;
    cin >> N >> K;

    vector<char> A(10001, ' ');

    for(int i = 0; i < N; i++){
        int x;
        cin >> x >> A[x];
    }

    int cnt = INT_MIN;

    for(int i = 0; i <= 10000-K; i++){
        int m = 0;
        for(int j = i; j <= i + K; j++){
            if(A[j] == ' '){
                continue;
            }else if(A[j] == 'G'){
                m++;
            }else if(A[j] == 'H'){
                m += 2;
            }
        }
        cnt = max(m, cnt);
    }

    cout << cnt;

    return 0;
}