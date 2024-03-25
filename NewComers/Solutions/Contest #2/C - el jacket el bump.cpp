#include <bits/stdc++.h>

using namespace std;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int S = 0, cnt{};
    for (int i = 0; i < n; ++i) {
        S += a[i];
        cnt++;
        if (S <= m) {
            if (cnt == k) {
                cout << "2stor yarab";
                return 0;
            }
        }
    }
    cout << "no bumps";
    return 0;
}