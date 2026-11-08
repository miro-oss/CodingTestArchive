#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, M; // A는 N개의 구간에 걸쳐 이동 / B는 M개의 구간에 걸쳐 이동
    cin >> N >> M;

    vector<int> A (1, 0);
    vector<int> B (1, 0);

    for(int i = 0; i < N; i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            A.push_back(A.back() + v);
        }
    }

    for(int j = 0; j < M; j++){
        int v, t;
        cin >> v >> t;
        while(t--){
            B.push_back(B.back() + v);
        }
    }

    int S = max(A.size(), B.size());
    A.resize(S, A.back());
    B.resize(S, B.back());

    vector<int> pride (S+1, 0); // 1은 A가 선두, 2은 B가 선두, 3은 둘다 선두

    int count = 0;

    for(int k = 1; k < S; k++){
        if(A[k] > B[k]){
            pride[k] = 1;
        }else if(A[k] < B[k]){
            pride[k] = 2;
        }else if(A[k] == B[k]){
            pride[k] = 3;
        }

        if (pride[k] != pride[k-1]){
            count++;
        }
    }

    cout << count;

    return 0;
}