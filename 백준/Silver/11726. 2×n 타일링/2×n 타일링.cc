#include <iostream>
using namespace std;

static int N;
static long D[1001];
static long mod = 10007;

int main(){
    cin >> N; 
    D[1] = 1;
    D[2] = 2;
    
    for(int i = 3; i <= N; i++){
        D[i] = (D[i - 1] + D[i - 2]) % mod;
    }
    cout << D[N];
}