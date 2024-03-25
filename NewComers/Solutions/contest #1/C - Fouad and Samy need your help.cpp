/*
   Author : Samy Nagy
   Codeforces Handle  : [Samy_Nagy](https://codeforces.com/profile/Samy_Nagy)
*/
#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            a[i] -= i;
        }
        const int sz = 2e5 + 5;
        int frqPos[sz]{};
        int frqNeg[sz]{};
        long long res{};
        for (int i = 0; i < n; ++i) {
            if (a[i] >= 0) {
                res += (frqPos[a[i]]);
                frqPos[a[i]]++;
            } else {
                res += (frqNeg[a[i] * -1]);
                frqNeg[a[i] * -1]++;
            }
        }
        cout << res << '\n';

    }
    return 0;
}
