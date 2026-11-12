#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int>key (1, 0);

    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        key.push_back(A);
    }

    int cnt = 0;

    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            for(int k = j+1; k <= N; k++){
                if(key[i] <= key[j] && key[j] <= key[k]){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}