#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    
    vector<int> a(1, 0);

    for(int i = 0; i < N; i++){
        int p;
        cin >> p;
        a.push_back(p);
    }

    int m = INT_MAX;

    for(int i = 1; i <= N; i++){
        int dist = 0;
        for(int j = 0; j < N; j++){
            int idx = (i + j - 1) % N+1;
            dist += a[idx]*j;
        }
        m = min(m, dist);
    }

    cout << m;
    return 0;
}