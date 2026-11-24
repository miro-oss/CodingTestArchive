#include <bits/stdc++.h>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    vector<tuple<int, int, int>> num;

    for(int i = 0; i < N; i++){
        int b, one, two;
        cin >> b >> one >> two;

        num.push_back({b, one, two});
    }

    int answer = 0;

    for(int a = 1; a < 10; a++){
        for(int b = 1; b < 10; b++){
            for(int c = 1; c < 10; c++){
                if(a == b || b == c || a == c) continue;

                int can[3] = {a, b, c};
                bool pos = true;

                for(int i = 0; i < N; i++){
                    int number = get<0>(num[i]);
                    int one = get<1>(num[i]);
                    int two = get<2>(num[i]);

                    int digit[3] = {
                        number / 100,
                        number / 10 % 10, 
                        number % 10
                    };

                    int cnt1 = 0;
                    int cnt2 = 0;

                    for(int j = 0; j < 3; j++){
                        for(int k = 0; k < 3; k++){
                            if(can[j] == digit[k]){
                                if(j == k) cnt1 ++;
                                else cnt2++;
                            }
                        }
                    }

                    if(cnt1 != one || cnt2 != two){
                        pos = false;
                        break;
                    }
                }
                if(pos) answer++;
            }
        }
    }

    cout << answer;
    return 0;
}