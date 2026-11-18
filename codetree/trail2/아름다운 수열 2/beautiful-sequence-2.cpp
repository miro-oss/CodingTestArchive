#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;

    vector<int> A(N, 0);
    vector<int> B(M, 0);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < M; i++){
        cin >> B[i];
    }
    
    sort(B.begin(), B.end());

    int cnt = 0;

    for(int i = 0; i <= N-M; i++){
        vector<int> temp;

        for(int j = i; j < i+M; j++){
            temp.push_back(A[j]);
        }

        sort(temp.begin(), temp.end());

        if(temp == B){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}