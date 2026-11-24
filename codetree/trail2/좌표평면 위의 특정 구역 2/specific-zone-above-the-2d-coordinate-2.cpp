#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<pair<int, int>> A(N, {0, 0});

    for(int i = 0; i < N; i++){
        cin >> A[i].first >> A[i].second;
    }

    int ext = INT_MAX;

    for(int i = 0; i < N; i++){
        vector<pair<int, int>> B;
        int mx = INT_MAX, my = INT_MAX;
        int Mx = INT_MIN, My = INT_MIN;

        for(int j = 0; j < N; j++){
            if(j == i) continue;

            mx = min(mx, A[j].first);
            my = min(my, A[j].second);
            Mx = max(Mx, A[j].first);
            My = max(My, A[j].second);
        }

        ext = min(ext, (Mx-mx)*(My-my));
    }

    cout << ext;

    return 0;
}