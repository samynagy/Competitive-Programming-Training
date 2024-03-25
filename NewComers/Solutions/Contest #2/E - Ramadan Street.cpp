#include <bits/stdc++.h>

using namespace std;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i >= k - 1) {
            mn = min(mn, a[i] - a[i - k + 1]);
        }
    }

    cout << mn;
    return 0;
}