#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << s << "\n";
    for (int i = 0; i < n; ++i) {
        if (i + 1 < n && s[i] == '.' && s[i + 1] == '^') {
            cout << '<';
        } else if (i - 1 >= 0 && s[i] == '.' && s[i - 1] == '^') {
            cout << '>';
        } else if (s[i] == '^') {
            cout << '+';
        } else if (s[i] == '+') {
            cout << 'v';
        } else {
            cout << '.';
        }
    }

    cout<<"\n";
    for (int i = 0; i < n; ++i) {
        if (s[i] == '^') {
            cout << 'v';
        } else {
            cout << '.';
        }
    }
    return 0;
}