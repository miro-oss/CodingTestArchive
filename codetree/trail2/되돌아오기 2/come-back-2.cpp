#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    // Please write your code here.
    string S;
    cin >> S;

    int s = S.size();
    int x = 0, y = 0, c = 0, dir = 1;

    while(s--){
        switch(S[c]){
            case 'L': dir = (dir + 1) % 4; break;
            case 'R': dir = (dir + 3) % 4; break;
            case 'F': x += dx[dir]; y += dy[dir]; break;
        }

        if(x == 0 && y == 0){
            cout << c+1;
            return 0;
        }
        c++;
    }

    cout << -1;

    return 0;
}