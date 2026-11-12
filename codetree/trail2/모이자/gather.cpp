#include <bits/stdc++.h>
using namespace std;


int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<int> home(1, 0);

    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        home.push_back(A);
    }

    int min_sum = INT_MAX;

    for(int i = 1; i <= N; i++){
        int sum = 0;
        for(int j = 1; j <= N; j++){
            sum += home[j]*abs(i-j);
        }
        if(sum < min_sum){
            min_sum = sum;
        }
    }

    cout << min_sum;

    return 0;
}