#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    vector<int> ans(N, 0);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    stack<int> S;
    S.push(0);
    
    for(int i = 0; i < N; i++){
        while(!S.empty() && A[S.top()] < A[i]){
            ans[S.top()] = A[i];
            S.pop();
        }
        S.push(i);
    }
    while(!S.empty()){
        ans[S.top()] = -1;
        S.pop();
    }
    for(int i = 0; i < N; i++){
        cout << ans[i] << " ";
    }
}