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
    int zr, one;
    cin >> zr >> one;

    if (one < zr - 1) {
        cout << -1;
        return 0;
    }
    if (zr < (one + 1) / 2 - 1) {
        cout << -1;
        return 0;
    }
    if (abs(zr - one) < 2) {
        int st;
        if (one >= zr)st = 1;
        else st = 0;
        for (int i = 0; i < zr + one; ++i) {
            cout << st;
            if (st == 1)st = 0;
            else st = 1;
        }
        return 0;
    }
    int st = 1;

    while (zr > (one + 1) / 2 - 1) {
        cout << st;
        if (st == 1)one--, st = 0;
        else zr--, st = 1;
    }

    for (int i = 0; i < zr; ++i) {
        cout << "110";
        one -= 2;
    }
    for (int i = 0; i < one; ++i) {
        cout << 1;
    }

    return 0;
}
