#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

int main() {
    // Please write your code here.
    string S;
    cin >> S;

    int x = 0, y = 0;
    int dir_num = 3;

    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'L'){
            dir_num = (dir_num + 3) % 4;
        }else if(S[i] == 'R'){
            dir_num = (dir_num + 1) % 4;
        }else if(S[i] == 'F'){
             x += dx[dir_num];
             y += dy[dir_num];
        }
    }

    cout << x << " " << y;

    return 0;
}