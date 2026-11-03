#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;

    int OFFSET = 100;
    int arr[2001][2001] = { 0 };

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        x += OFFSET;
        y += OFFSET;

        for(int j = 0; j < 8; j++){
            for(int p = 0; p < 8; p++){
                arr[x + j][y + p] = 1;
            }
        }
    }

    int m = 0;
    for(int k = 0; k < 2001; k++){
        for(int l = 0; l < 2001; l++){
            if(arr[k][l] == 1){
                m++;
            }
        }
    }

    cout << m;

    return 0;
}