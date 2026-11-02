#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int> line(200001, 0);

    int OFFSET = 100000;

    int st = OFFSET;

    for(int i = 0; i < N; i++){
        int a;
        char b;
        cin >> a >> b;

        if(b == 'R'){
            for(int j = 0; j < a; j++){
                line[st + j]++;
            }
            st += a;
        }else if(b == 'L'){
            for(int k = 1; k <= a; k++){
                line[st - k]++;
            }
            st -= a;
        }
    }

    int count = 0;

    for(int l = 0; l < line.size(); l++){
        if(line[l] >= 2){
            count ++;
        }
    }

    cout << count;

    return 0;
}