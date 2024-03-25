#include <bits/stdc++.h>

using namespace std;

long long a[20];

long long ways(int i, long long x, int &n, long long &k) {
    if (i == n) {
        if (x >= k) {
            return 1;
        } else {
            return 0;
        }
    }
    int op1, op2 = 0;
    op1 = ways(i + 1, x, n, k);
    if (a[i] <= x) {
        op2 = ways(i + 1, x + a[i], n, k);
    }
    return op1 + op2;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    long long k, x;
    cin >> n >> k >> x;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << ways(0, x, n, k);
    return 0;
}