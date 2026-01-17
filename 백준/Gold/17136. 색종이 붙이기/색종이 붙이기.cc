#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

static int M[10][10];
static int S[6] = { 0, 5, 5, 5, 5, 5};
static int result = INT_MAX;
void backtracking(int xy, int useCnt);
bool check(int x, int y, int size);
void fill(int x, int y, int size, int num);

int main(){
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            cin >> M[i][j];
        }
    }

    backtracking(0, 0);

    if(result == INT_MAX) cout << -1 << '\n';
    else cout << result << '\n';
}

void backtracking(int xy, int useCnt){
    if(xy == 100){
        result = min(result, useCnt);
        return;
    }

    int x = xy % 10;
    int y = xy / 10;

    if(result <= useCnt) return;

    if(M[y][x] == 1){
        for(int i = 5; i >= 1; --i){
            if(S[i] > 0 && check(x, y, i)){
                S[i]--;
                fill(x, y, i, 0);
                backtracking(xy + 1, useCnt + 1);
                S[i]++;
                fill(x, y, i, 1);
            }
        }
    }else{
        backtracking(xy+1, useCnt);
    }
}

bool check(int x, int y, int size){
    if(x + size > 10 || y + size > 10) return false;
    for(int i = y; i < y + size; ++i){
        for(int j = x; j < x + size; ++j){
            if(M[i][j] != 1) return false;
        }
    }
    return true;
}

void fill(int x, int y, int size, int num){
    for(int i = y; i < y + size; ++i){
        for(int j = x; j < x + size; ++j){
            M[i][j] = num;
        }
    }
}
