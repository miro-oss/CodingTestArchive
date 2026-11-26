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

    int ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            for(int k = j + 1; k < N; k++){
                set<int> visited;
                bool lap = false;

                for(int t = 0; t < N; t++){
                    if(t == i || t == j || t == k) continue;

                    for(int x = A[t].first; x <= A[t].second; x++){
                        if(visited.count(x)){
                            lap = true;
                            break;
                        }
                        visited.insert(x);
                    }
                    if(lap) break;
                }
                if(!lap) ans++;
            }
        }
    }

    cout << ans;
    return 0;
}