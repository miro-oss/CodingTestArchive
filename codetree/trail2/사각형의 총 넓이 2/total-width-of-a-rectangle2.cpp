#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int OFFSET = 100;

    int arr[2001][2001] = {0};

    for(int i = 0; i < N; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        a += OFFSET;
        b += OFFSET;
        c += OFFSET;
        d += OFFSET;

        for(int i = a; i < c; i++){
            for(int j = b; j < d; j++){
                arr[i][j] = 1;
            }
        }
    }

    int m = 0;

    for(int k = 0; k < 2001; k++){
        for(int p = 0; p < 2001; p++){
            if(arr[k][p] == 1){
                m++;
            }
        }
    }

    cout << m;

    return 0;
}