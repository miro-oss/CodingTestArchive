#include <iostream>
using namespace std;

static int N, M;
static bool V[8];
static int S[8];

void backtracking(int length);

int main(){
    cin >> N >> M;
    backtracking(0);
}

void backtracking(int length){
    if(length == M){
        for(int i = 0; i < M; i++){
            cout << S[i] + 1 << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < N; i++){
        if(!V[i]){
            V[i] = true;
            S[length] = i;
            backtracking(length + 1);
            V[i] = false;
        }
    }
}
