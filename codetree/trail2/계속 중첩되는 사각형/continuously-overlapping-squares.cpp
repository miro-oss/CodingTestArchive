#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;

    int OFFSET = 100;
    int arr[2001][2001] = {0};

    for(int i = 0; i < N; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        a += OFFSET;
        b += OFFSET;
        c += OFFSET;
        d += OFFSET;

        for(int j = a; j < c; j++){
            for(int k = b; k < d; k++){
                arr[j][k] = (i%2 == 0 ? 1 : 2);
            }
        }
    }

    int m = 0;

    for(auto& x : arr){
        for(auto y : x){
            if(y == 2){
                m++;
            }
        }
    }

    cout << m;

    return 0;
}