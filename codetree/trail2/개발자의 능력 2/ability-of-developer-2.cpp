#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    vector<int> abil(6, 0);

    int sum = 0;
    int diff = INT_MAX;

    for(int i = 0; i < 6; i++){
        cin >> abil[i];
        sum += abil[i];
    }

    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            int sum1 = abil[i] + abil[j];
            int sum2 = 0, sum3 = 0;
            for(int k = 0; k < 6; k++){
                if(k == i || k == j) continue;

                for(int l = k + 1; l < 6; l++){
                    if(l == i || l == j) continue;

                    sum2 = abil[k] + abil[l];
                    sum3 = sum - sum1 - sum2;

                    diff = min(diff, abs(max({sum1, sum2, sum3}) - min({sum1, sum2, sum3})));
                }
            }            
        }
    }

    cout << diff;


    return 0;
}