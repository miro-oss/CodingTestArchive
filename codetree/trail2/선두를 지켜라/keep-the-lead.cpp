#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int N, M;
    cin >> N >> M;

    vector<int> A(1, 0);
    vector<int> B(1, 0);

    int timeA = 1;

    for(int i = 0; i < N; i++){
        int v, t;
        cin >> v >> t;

        while(t--){
            A.push_back(A.back() + v);
            timeA++;
        }
    }

    for(int i = 0; i < M; i++){
        int v, t;
        cin >> v >> t;

        while(t--){
            B.push_back(B.back() + v);
        }
    }
    
    int prev = 0;
    int count = 0;
    for(int k = 1; k < timeA; k++){
        if(A[k] == B[k]) continue;

        int current;
        if(A[k] > B[k]) current = 1;
        else current = 2;

        if(prev != 0 && prev != current){
            count++;
        }

        prev = current;
    }

    cout << count;


    return 0;
}