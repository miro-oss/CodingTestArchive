#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<pair<char, int>> A;

    int x = 0, y = 0, sum = 0;

    for(int i = 0; i < N; i++){
        char d;
        int l;
        cin >> d >> l;
        A.push_back({d, l});
    }

    for(int j = 0; j < N; j++){
        while(A[j].second--){
            switch(A[j].first){
                case 'W': x -= 1; break;
                case 'E': x += 1; break;
                case 'N': y += 1; break;
                case 'S': y -= 1; break;
            }

            sum += 1;

            if(x == 0 && y == 0){
                cout << sum;
                return 0;
            }
        }
    }

    cout << -1;

    return 0;
}