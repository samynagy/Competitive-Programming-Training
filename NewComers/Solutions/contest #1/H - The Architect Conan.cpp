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
        int bed = 0, kitchen = 0, living = 0;
        while (n--) {
            string s;
            cin >> s;
            if (s.size() >= 3 and s.substr(0, 3) == "bed")bed++;
            else if (s.size() >= 7 and s.substr(0, 7) == "kitchen")kitchen++;
            else if (s.size() >= 6 and s.substr(0, 6) == "living")living++;
        }
        cout << min({bed / 2, kitchen, living}) << '\n';

    }
    return 0;
}
