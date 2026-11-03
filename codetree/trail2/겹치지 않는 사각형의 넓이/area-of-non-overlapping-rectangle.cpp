#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int OFFSET = 1000;

    int arr[2001][2001] = {0};

    for(int i = 0; i < 3; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        a += OFFSET;
        b += OFFSET;
        c += OFFSET;
        d += OFFSET;

        for(int j = a; j < c; j++){
            for(int k = b; k < d; k++){
                if(i == 2){
                    arr[j][k] = 0;
                }else{
                    arr[j][k] = 1;
                }
            }
        }
    }

    int m = 0;

    for(int p = 0; p < 2001; p++){
        for(int l = 0; l < 2001; l++){
            if(arr[p][l] == 1){
                m++;
            }
        }
    }

    cout << m;

    return 0;
}