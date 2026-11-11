#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

bool IsRange(int x, int y, int n){
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<string> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int K;
    cin >> K;

    K--;

    int x = 0, y = 0;
    int dir = 0;
    
    int side = K / N;
    int pos = K % N;

switch(side){
    case 0:
        x = 0;
        y = pos;
        dir = 1;
        break;

    case 1:
        x = pos;
        y = N - 1;
        dir = 2;
        break;

    case 2:
        x = N - 1;
        y = N - 1 - pos;
        dir = 3;
        break;

    default:
        x = N - 1 - pos;
        y = 0;
        dir = 0;
        break;
}

    int cnt = 0;

    while(IsRange(x, y, N)){
        if(A[x][y] == '/'){
            dir = 3 - dir;
        }
        else{
            if(dir % 2 == 0){
                dir++;
            }else{
                dir--;
            }
        }

        cnt++;

        x += dx[dir];
        y += dy[dir];
    }

    cout << cnt;

    return 0;
}