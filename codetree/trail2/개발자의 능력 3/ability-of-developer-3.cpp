#include <bits/stdc++.h>
using namespace std;


int main() {
    // Please write your code here.
    vector<int> A(6, 0);
    int sum = 0;

    for(int i = 0; i < 6; i++){
        cin >> A[i];
        sum += A[i];
    }

    int m = INT_MAX;

    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            for(int k = j + 1; k < 6; k++){
                int sum1 = A[i] + A[j] + A[k];
                int sum2 = sum - sum1;

                m = min(m, abs(sum1-sum2));
            }
        }
    }

    cout << m;


    return 0;
}