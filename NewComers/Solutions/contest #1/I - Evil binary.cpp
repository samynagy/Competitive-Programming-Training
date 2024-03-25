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
    string s;
    cin >> s;
    if (s.back() == '0')cout << "Yes";
    else cout << "No";
    return 0;
}
