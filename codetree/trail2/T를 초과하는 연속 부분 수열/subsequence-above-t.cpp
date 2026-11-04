#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N, T;
    cin >> N >> T;

    vector<int> a(N, 0);

    int cnt = 0, maxC = 0;

    for(int i = 0; i < N; i++){
        cin >> a[i];

        if(a[i] > T){
            cnt++;
        }else{
            cnt = 0;
        }

        maxC = max(maxC, cnt);
    }

    cout << maxC;
    return 0;
}