#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int> A(N, 0);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int cnt = 0;

    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int sum = 0;
            bool isag = false;
            for(int k = i; k <= j; k++){
                sum += A[k];
            }

            int len = j - i + 1;

            if(sum % len != 0){
                continue;
            }

            int ag = sum / len;

            for(int k = i; k <= j; k++){
                if(A[k] == ag){
                    isag = true;
                }
            }
            if(isag){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}