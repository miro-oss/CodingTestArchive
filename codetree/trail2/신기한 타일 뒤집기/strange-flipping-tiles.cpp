#include <bits/stdc++.h>
using namespace std;


int main() {
    // Please write your code here.

    int N;
    cin >> N;

    vector<char> tile(200001, 'g');

    int OFFSET = 100000;
    int st = OFFSET;

    for(int i = 0; i < N; i++){
        int a;
        char b;
        cin >> a >> b;

        if(b == 'R'){
            for(int j = 0; j < a; j++){
                int idx = st + j;
                tile[idx] = 'b';
            }
            st += (a-1);
        }else if(b == 'L'){
            for(int p = 0; p < a; p++){
                int idx = st - p;
                tile[idx] = 'w';
            }
            st -= (a - 1);
        }
    }

    int wc = 0;
    int bc = 0;

    for(int k = 0; k < tile.size(); k++){
        switch(tile[k]){
            case 'w': wc++; break;
            case 'b': bc++; break;
        }
    }

    cout << wc << " " << bc;

    return 0;
}