/*
   Author : Samy Nagy
   Codeforces Handle  : [Samy_Nagy](https://codeforces.com/profile/Samy_Nagy)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int x;
    cin >> x;
    bool nums[3002] = { false };
    for (int i = 0; i < x; ++i) {
        int n;
        cin >> n;
        nums[n] = true;
    }
    int res = 1;
    while (nums[res]) {
        res++;
    }

    cout << res << endl;
	
}
