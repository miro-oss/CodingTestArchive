#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;

    vector<int> maxarr(N, 0);

    for(int i = 0; i < N; i++){
        cin >> maxarr[i];
    }

    int cnt = 0;
    int maxC = 0;

    for(int j = 0; j < N; j++){
        if(j == 0 || maxarr[j] != maxarr[j-1]){
            cnt = 1;
        }else{
            cnt++;
        }

        maxC = max(maxC, cnt);
    }

    cout << maxC;
    return 0;
}