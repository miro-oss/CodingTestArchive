#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    vector<int> A(5, 0);

    int sum = 0;

    for(int i = 0; i < 5; i++){
        cin >> A[i];
        sum += A[i];
    }

    int diff = INT_MAX;

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            int sum1 = A[i] + A[j];
            int sum2 = 0, sum3 = 0;

            for(int k = 0; k < 5; k++){
                if(k == i || k == j) continue;
                sum2 = A[k];
                sum3 = sum - sum1 - sum2;

                if(sum1 == sum2 || sum2 == sum3 || sum3 == sum1) continue;

                diff = min(diff, max({sum1, sum2, sum3}) - min({sum1, sum2, sum3}));
            }
        }
    }

    if(diff == INT_MAX) cout << -1;
    else cout << diff;

    return 0;
}