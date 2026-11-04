#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int OFFSET = 1000;

    int arr[2001][2001] = {0};

    for(int i = 0; i < 2; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        a += OFFSET;
        b += OFFSET;
        c += OFFSET;
        d += OFFSET;

        for(int j = a; j < c; j++){
            for(int p = b; p < d; p++){
                arr[j][p] = (i == 0 ? 1 : 0);
            }
        }
    }

    int minX = 2001; 
    int maxX = -1;
    int minY = 2001;
    int maxY = -1;

    for(int k = 0; k < 2001; k++){
        for(int l = 0; l < 2001; l++){
            if(arr[k][l] == 1){
                minX = min(minX, k);
                maxX = max(maxX, k);
                minY = min(minY, l);
                maxY = max(maxY, l);
            }
        }
    }

    if(maxX == -1){
        cout << 0;
    }else{
        int ans = (maxX - minX + 1) * (maxY - minY + 1);
        cout << ans;
    }
    
    return 0;
}