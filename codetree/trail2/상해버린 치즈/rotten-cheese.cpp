#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, M, D, S;
    cin >> N >> M >> D >> S;

    vector<tuple<int, int, int>> C;
    vector<pair<int, int>> sick(S, {0, 0});

    for(int i = 0; i < D; i++){
        int p, m, t;
        cin >> p >> m >> t;
        C.push_back({p, m, t});
    }

    for(int i = 0; i < S; i++){
        cin >> sick[i].first >> sick[i].second;
    }

    int ans = 0;

    for(int i = 1; i <= M; i++){
        bool R = true;

        for(int j = 0; j < S; j++){
            bool check = false;

            for(int k = 0; k < D; k++){
                int p, m, t;
                tie(p, m, t) = C[k];

                if(p == sick[j].first && m == i && t < sick[j].second){
                    check = true;
                    break;
                }
            }
            if(!check){
                R = false;
                break;
            }
        }
        if(!R){ 
            continue;
        }
        
        set<int> pp;

        for(int j = 0; j < D; j++){
            int p, m, t;
            tie(p, m, t) = C[j];

            if(m == i){
                pp.insert(p);
            }
        }

        ans = max(ans, (int)pp.size());
    }

    cout << ans;

    return 0;
}