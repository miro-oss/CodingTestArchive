#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> stu(N+1 , 0);

    for(int i = 0; i < M; i++){
        int n = 0;
        cin >> n;

        stu[n]++;

        if(stu[n] == K){
            cout << n;
            return 0;
        }
    }

    cout << -1;
    return 0;
}