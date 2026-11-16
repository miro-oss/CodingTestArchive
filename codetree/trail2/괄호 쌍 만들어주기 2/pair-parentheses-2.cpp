#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    int cnt = 0;

    for(int i = 0; i < A.size(); i++){
        if(A[i] == '('){
            if(A[i+1] == '('){
                for(int j = i+2; j < A.size()-1; j++){
                    if(A[j] == ')'){
                        if(A[j+1] == ')'){
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}