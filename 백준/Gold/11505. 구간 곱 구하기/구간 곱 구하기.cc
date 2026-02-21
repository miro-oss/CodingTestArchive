#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007LL;

struct SegTree {
    int n;
    vector<long long> tree;

    SegTree(int n) : n(n) {
        tree.assign(4 * n + 5, 1LL);
    }

    long long mergeVal(long long a, long long b) {
        return (a * b) % MOD;
    }

    void build(const vector<long long>& arr, int node, int l, int r) {
        if (l == r) {
            tree[node] = arr[l] % MOD;
            return;
        }
        int mid = (l + r) / 2;
        build(arr, node * 2, l, mid);
        build(arr, node * 2 + 1, mid + 1, r);
        tree[node] = mergeVal(tree[node * 2], tree[node * 2 + 1]);
    }

    void update(int node, int l, int r, int idx, long long val) {
        if (idx < l || idx > r) return;
        if (l == r) {
            tree[node] = val % MOD;
            return;
        }
        int mid = (l + r) / 2;
        update(node * 2, l, mid, idx, val);
        update(node * 2 + 1, mid + 1, r, idx, val);
        tree[node] = mergeVal(tree[node * 2], tree[node * 2 + 1]);
    }

    long long query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return 1LL;           // 곱의 항등원
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        long long left = query(node * 2, l, mid, ql, qr);
        long long right = query(node * 2 + 1, mid + 1, r, ql, qr);
        return mergeVal(left, right);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> arr(N + 1);
    for (int i = 1; i <= N; i++) cin >> arr[i];

    SegTree st(N);
    st.build(arr, 1, 1, N);

    for (int i = 0; i < M + K; i++) {
        int a;
        long long b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            // b번째 값을 c로 변경
            st.update(1, 1, N, (int)b, c);
        } else if (a == 2) {
            // [b, c] 구간 곱 출력
            cout << st.query(1, 1, N, (int)b, (int)c) << "\n";
        }
    }

    return 0;
}