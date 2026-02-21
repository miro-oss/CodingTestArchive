#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt[26] = {0};

    for (char c : s) {
        if ('a' <= c && c <= 'z') c = c - 'a' + 'A';
        cnt[c - 'A']++;
    }

    int mx = 0;
    char ans = '?';
    bool dup = false;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] > mx) {
            mx = cnt[i];
            ans = char('A' + i);
            dup = false;
        } else if (cnt[i] == mx && mx != 0) {
            dup = true;
        }
    }

    cout << (dup ? '?' : ans) << "\n";
    return 0;
}