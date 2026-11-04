#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int cnt = 0, maxC = 0;

    vector<int> a(N, 0);

    for(int i = 0; i < N; i++){
        cin >> a[i];

        if(i == 0 || (a[i] > 0 && a[i-1] > 0) || (a[i] < 0 && a[i-1] < 0)){
            cnt++;
        }else{
            cnt = 1;
        }

        maxC = max(maxC, cnt);
    }

    cout << maxC;
    return 0;
}