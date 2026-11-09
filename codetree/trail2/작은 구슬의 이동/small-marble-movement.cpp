#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};

bool IsRange(int x, int y, int n){
    if(x >= 1 && x <= n && y >= 1 && y <= n){
        return true;
    }else{
        return false;
    }
}

int dir(char a){
    switch(a){
        case 'R': return 0; 
        case 'D': return 1;
        case 'U': return 2; 
        case 'L': return 3; 
    }
}

int main() {
    // Please write your code here.
    int N, T;
    cin >> N >> T;

    int R, C;
    char D;
    cin >> R >> C >> D;

    int dir_num = dir(D);

    while(T--){
        int nx = R + dx[dir_num], ny = C + dy[dir_num];
        if(!IsRange(nx, ny, N)){
            dir_num = 3 - dir_num;
            continue;
        }
        R += dx[dir_num], C += dy[dir_num];
    }

    cout << R << " " << C;

    return 0;
}