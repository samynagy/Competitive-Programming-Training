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
        int l, r;
        cin >> l >> r;
        int res{};
        while (l > 0 or r > 0) {
            res += r - l;
            r /= 10;
            l /= 10;
        }
        cout << res << '\n';
    }


    return 0;
}
