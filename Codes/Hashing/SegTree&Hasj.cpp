//// https://cses.fi/problemset/task/2420/
///// update point and get range 

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
/**
 *    "وَلْيَعْلَمُوا أَنَّ هذِهِ هِيَ يَدُكَ. أَنْتَ يَا رَبُّ فَعَلْتَ هذَا." (مز 109: 27).
**/
 
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
#define  int long long
#define endl '\n'
 
using namespace std;
using namespace __gnu_pbds;
const int N = 8e5 + 5, M = 1e8, ign = 1e9;//, mod = 998244353;
 
int dx[] = {0, 0, -1, 1, 1, -1, 1, -1};
int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};
char di[] = {'L', 'R', 'U', 'D'};
int pw[40][N];
 
//
//int power(int a, int p, int Mod) {
//    if (!p)return 1;
//    int res = power(a, p / 2, Mod);
//    res = res * res % Mod;
//    if (p & 1)res = res * a % Mod;
//    return res;
//}
//
void pushBack(int &h, int v, int sz, int base, int Mod) {
    if (!v)return;
    h = h * pw[base][sz] % Mod;
    h = (h + v) % Mod;
}
//
//void pushFront(int &h, int v, int i, int base, int Mod) {
//    v = v * power(base, i, Mod) % Mod;
//    h = (h + v) % Mod;
//}
//
//void popBack(int &h, int v, int base, int Mod) {
//    h = (h - v + Mod) % Mod;
//    h = h * power(base, Mod - 2, Mod) % Mod;
//}
//
//void popFront(int &h, int v, int i, int base, int Mod) {
//    v = v * power(base, i, Mod) % Mod;
//    h = (h - v + Mod) % Mod;
//}
 
int n, m, B[2] = {31, 37}, mod[2] = {1000000007, (int) (1e9 + 19)};
 
struct SegTree {
#define md lx + (rx-lx)/2
    vector<array<int, 3>> seg;
 
    SegTree() {
 
        seg = vector<array<int, 3>>(4 * n);
    }
 
    array<int, 3> merge(array<int, 3> lft, array<int, 3> rt) {
        pushBack(lft[0], rt[0], rt[2], B[0], mod[0]);
        pushBack(lft[1], rt[1], rt[2], B[1], mod[1]);
        lft[2] += rt[2];
        return lft;
    }
 
    void build(string &s, int x = 0, int lx = 0, int rx = n - 1) {
        if (lx == rx) {
            if (lx < n) {
                seg[x][2] = 1;
                pushBack(seg[x][0], s[lx], 1, B[0], mod[0]);
                pushBack(seg[x][1], s[lx], 1, B[1], mod[1]);
            }
            return;
        }
        build(s, 2 * x + 1, lx, md);
        build(s, 2 * x + 2, md + 1, rx);
        seg[x] = merge(seg[x * 2 + 1], seg[x * 2 + 2]);
    }
 
    void update(int i, int v, int x = 0, int lx = 0, int rx = n - 1) {
        if (lx == rx) {
            seg[x] = {0, 0, 1};
            pushBack(seg[x][0], v, 1, B[0], mod[0]);
            pushBack(seg[x][1], v, 1, B[1], mod[1]);
            return;
        }
        if (i <= md)
            update(i, v, 2 * x + 1, lx, md);
        else
            update(i, v, 2 * x + 2, md + 1, rx);
        seg[x] = merge(seg[x * 2 + 1], seg[x * 2 + 2]);
    }
 
    array<int, 3> query(int l, int r, int x = 0, int lx = 0, int rx = n - 1) {
        if (l <= lx and rx <= r)return seg[x];
        if (r < lx or rx < l)return {0, 0, 0};
        return merge(
                query(l, r, 2 * x + 1, lx, md),
                query(l, r, 2 * x + 2, md + 1, rx)
        );
    }
 
#undef md
};
 
void pre() {
    for (int i = 0; i < 2; ++i) {
        pw[B[i]][0] = 1;
        for (int j = 1; j < n; ++j) {
            pw[B[i]][j] = pw[B[i]][j - 1] * B[i] % mod[i];
        }
    }
}
 
void smsm() {
    cin >> n >> m;
    string s, t;
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    for (auto &i: s)i = i - 'a' + 1;
    for (auto &i: t)i = i - 'a' + 1;
    pre();
    SegTree seg1, seg2;
    seg1.build(s);
    seg2.build(t);
    int ty, l, r;
    char x;
    while (m--) {
        cin >> ty;
        if (ty == 1) {
            cin >> l >> x;
            seg1.update(--l, x - 'a' + 1);
            seg2.update(n - l - 1, x - 'a' + 1);
        } else {
            cin >> l >> r;
            --l, --r;
            array<int, 3> ret[2] = {
                    seg1.query(l, r),
                    seg2.query(n - r - 1, n - l - 1)
            };
            bool ok = true;
            ok &= (ret[0][0] == ret[1][0]);
            ok &= (ret[0][1] == ret[1][1]);
            cout << (ok ? "YES" : "NO") << (m ? "\n" : "");
        }
    }
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t = 1;
//    cin >> t;
 
    for (int i = 1; i <= t; ++i) {
        //        cout << "Case " << i << ": ";
        smsm();
        // cout << "\n";
    }
 
    return 0;
}
