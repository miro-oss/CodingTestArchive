#include <bits/stdc++.h>
using namespace std;

bool isdial(int a, int b, int N){
    return min(abs(a-b), N-abs(a-b)) <= 2;
}

int main() {
    // Please write your code here.
    int N, a1, b1, c1, a2, b2, c2;
    cin >> N >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
    int cnt = 0; 

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                if((isdial(a1, i, N) && isdial(b1, j, N) && isdial(c1, k, N)) || (isdial(a2, i, N) && isdial(b2, j, N) && isdial(c2, k, N))){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}