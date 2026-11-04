#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;

    vector<int> a(N, 0);
    int cnt = 0, maxC = 0;

    for(int i = 0; i < N; i++){
        cin >> a[i];

        if(i == 0 || a[i] > a[i-1]){
            cnt++;
        }else{
            cnt = 1;
        }

        maxC = max(maxC, cnt);
    }

    cout << maxC;
    return 0;
}