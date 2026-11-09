#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};
int nx, ny;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int x = 0, y = 0;

    for(int i = 0; i < N; i++){
        int d;
        char c;
        cin >> c >> d;

        if(c == 'W'){
            x += d*dx[2];  
        }else if(c == 'S'){
            y += d*dy[1];
        }else if(c == 'N'){
            y += d*dy[3];
        }else if(c == 'E'){
            x += d*dx[0];
        }
    }

    cout << x << " " << y;

    return 0;
}