#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    int OFFSET = 100;
    cin >> N;
    vector<int> line(1001, 0);
    for(int i = 0; i < N; i++){
        int a, b;
        cin >> a >> b;

        a += OFFSET;
        b += OFFSET;
        
        for(int k = a; k < b; k++){
            line[k]++;
        }
    }

    int M = 0;
    for(int l = 0; l < line.size(); l++){
        if(M < line[l]){
            M = line[l];
        }
    }

    cout << M; 

    return 0;
}