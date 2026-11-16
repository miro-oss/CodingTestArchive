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

    int m = -1;

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                // carry 는,,, 각 자릿수를 더했을 때 10이 넘으면 안된다..
                int a = A[i];
                int b = A[j];
                int c = A[k];
                bool isCarry = false;

                while(a > 0 || b > 0 || c > 0){
                    if( a%10 + b%10 + c%10 >= 10){
                        isCarry = true;
                        break;
                    }

                    a /= 10;
                    b /= 10;
                    c /= 10;
                }
                if(!isCarry){
                    m = max(m, A[i]+A[j]+A[k]);
                }
            }
        }
    }

    cout << m;
    return 0;
}