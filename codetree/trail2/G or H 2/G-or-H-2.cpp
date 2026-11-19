#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<char> A(101, ' ');

    for(int i = 0; i < N; i++){
        int x;
        char c;
        cin >> x >> c;

        A[x] = c;
    }
    
    int m = INT_MIN;

    for(int i = 0; i < 101; i++){
        for(int j = i; j < 101; j++){
            if(A[i] == ' ' || A[j] == ' '){
                continue;
            }

            int gc = 0;
            int hc = 0;

            for(int k = i; k <= j; k++){
                if(A[k] == 'G'){
                    gc++;
                }else if(A[k] == 'H'){
                    hc++;
                }
            }

            if(gc == hc || gc == 0 || hc == 0){
                m = max(m, j - i);
            }            
        }
    }

    cout << m;

    return 0;
}