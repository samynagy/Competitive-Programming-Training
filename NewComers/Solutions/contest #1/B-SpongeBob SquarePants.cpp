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
        int a, b;
        cin >> a >> b;
        if (a == b)cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}
