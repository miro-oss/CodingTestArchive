#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    
    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                if(s[i] == 'C' && s[j] == 'O' && s[k] == 'W'){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;


    return 0;
}