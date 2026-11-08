#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int N, M;
    cin >> N >> M;

    vector<int> A(1, 0);
    vector<int> B(1, 0);

    for(int i = 0; i < N; i++){
        int t;
        char d;
        cin >> t >> d;

        while(t--){
            if(d == 'L'){
                A.push_back(A.back() - 1);
            }else if(d == 'R'){
                A.push_back(A.back() + 1);
            }
        }
    }

    for(int j = 0; j < M; j++){
        int t;
        char d;
        cin >> t >> d;

        while(t--){
            if(d == 'L'){
                B.push_back(B.back() - 1);
            }else{
                B.push_back(B.back() + 1);
            }
        }
    }

    int count = 0;
    int S = max(A.size(), B.size());

    A.resize(S, A.back());
    B.resize(S, B.back());

    for(int k = 1; k < S; k++){
        if(A[k] == B[k] && A[k-1] != B[k-1]){
            count++;
        }
    }
    
    cout << count;

    return 0;
}