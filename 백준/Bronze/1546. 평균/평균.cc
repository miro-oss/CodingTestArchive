#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> score(N);
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    int M = score[0];
    for (int s : score) {
        if (M < s) M = s;
    }

    double sum = 0;
    for (int s : score) {
        sum += (double)s / M * 100;
    }

    cout << sum / N << "\n";
}