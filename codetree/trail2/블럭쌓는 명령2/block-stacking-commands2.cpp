#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.

    int N, K;
    cin >> N >> K;
    
    vector<int> blank (N, 0);
    
    for(int i = 0; i < K; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a - 1; j < b; j++){
            blank[j] += 1;
        }
    }

    int M = 0;
    for(int k = 0; k < N; k++){
        if(M < blank[k]){
            M = blank[k];
        }
    }

    cout << M;

    return 0;
}