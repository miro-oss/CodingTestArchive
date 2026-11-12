#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    string A;
    cin >> A;

    int cnt = 0;

    for(int i= 0; i < A.size(); i++){
        if(A[i] == '('){
            for(int j = i+1; j < A.size(); j++){
                if(A[j] == ')'){
                    cnt++;
                }
            }
        }
    }     

    cout << cnt;

    return 0;
}