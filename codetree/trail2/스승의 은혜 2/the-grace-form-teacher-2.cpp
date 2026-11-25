#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, B;
    cin >> N >> B;

    vector<int> P(N, 0);
    int mp = INT_MIN;

    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    int cnt = 0;

    for(int i = 0; i < N; i++){
        int sum = P[i] / 2;
        int c = 1;

        for(int j = 0; j < N; j++){
            if(i == j) continue;

            if(sum + P[j] <= B){
                sum += P[j];
                c++;
            }
        }
        cnt = max(c, cnt);
    }

    cout << cnt;

    return 0;
}