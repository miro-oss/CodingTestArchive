#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, K, P, T; // N명의 개발자, K번의 악수, 초기 감염 개발자 P, T개의 악수기록
    cin >> N >> K >> P >> T;

    vector<pair<int, int>> time (251, {0, 0});
    vector<pair<int, int>> Dev (N+1, {0, K});

    while(T--){
        int t, x, y; // t초에 x랑 y가 악수
        cin >> t >> x >> y;
        time[t] = {x, y};
    }

    Dev[P].first = 1;

    for(int i = 1; i < time.size(); i++){

        bool canA = Dev[time[i].first].first == 1 && Dev[time[i].first].second > 0;
        bool canB = Dev[time[i].second].first == 1 && Dev[time[i].second].second > 0;

        if(canA){
            Dev[time[i].second].first = 1;
            Dev[time[i].first].second--;
        }

        if(canB){
            Dev[time[i].first].first = 1;
            Dev[time[i].second].second--;
        }
    }

    for(int j = 1; j <= N; j++){
        cout << Dev[j].first;
    }
    
    return 0;
}