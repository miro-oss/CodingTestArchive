#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, B;
    cin >> N >> B;

    vector<pair<int, int>> PS(N, {0, 0});

    for(int i = 0; i < N; i++){
        cin >> PS[i].first >> PS[i].second;
    }

    sort(PS.begin(), PS.end(), [](const auto& a, const auto& b) {
        return a.first + a.second < b.first + b.second;
    });

    int cnt = 0;

    for(int i = 0; i < N; i++){
        int sum = PS[i].first / 2 + PS[i].second;
        if (sum > B) continue;
        int c = 1;

        for(int j = 0; j < N; j++){
            if(i == j) continue;
            if(sum + PS[j].first + PS[j].second <= B){
                sum = sum + PS[j].first + PS[j].second;
                c++;
            }
        }
        cnt = max(c, cnt);
    }

    cout << cnt;
    
    return 0;
}