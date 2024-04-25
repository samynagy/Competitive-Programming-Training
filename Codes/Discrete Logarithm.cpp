/////  (a^x)%m = b%m -> given a,b,m    and find X (^ refere to power ).
int solve(int a, int b, int m) {
    a %= m, b %= m;
    int k = 1, add = 0, g;
    while ((g = gcd(a, m)) > 1) {
        if (b == k)
            return add;
        if (b % g)
            return -1;
        b /= g, m /= g, ++add;
        k = (k * 1ll * a / g) % m;
    }

    int n = ceil(sqrtl(1.0 * m));
    int an = 1;
    unordered_map<int, int> vals;
    for (int q = 0, cur = b; q < n; ++q) {
        vals[(an * b) % m] = q;
        an = (an * a) % m;

    }

    for (int p = 1, cur = k; p <= n; ++p) {
        cur = (cur * 1ll * an) % m;
        if (vals.count(cur)) {
            int ans = n * p - vals[cur] + add;
            return ans;
        }
    }
    return -1;
}
