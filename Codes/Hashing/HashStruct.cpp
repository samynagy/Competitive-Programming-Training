
const int B1 = 256, B2 = 128;
const int MOD1 = 2e9 + 11, MOD2 = 1e9 + 7;

struct Hash {
    vector<array<int, 2> > prefix, suffix;
    vector<int> p1, p2;
    int n;

    void hash_prefix(const string &str) {
        int h1 = 0, h2 = 0;
        for (char i: str) {
            h1 = (1LL * h1 * B1) % MOD1;
            h1 = (h1 + i) % MOD1;
            h2 = (1LL * h2 * B2) % MOD2;
            h2 = (h2 + i) % MOD2;
            prefix.push_back({h1, h2});
        }
    }


    void hash_suffix(const string &str) {
        int h1 = 0, h2 = 0;
        suffix.assign(n, {});
        for (int i = n - 1; i >= 0; i--) {
            h1 = (1LL * h1 * B1) % MOD1;
            h1 = (h1 + str[i]) % MOD1;
            h2 = (1LL * h2 * B2) % MOD2;
            h2 = (h2 + str[i]) % MOD2;
            suffix[i] = {h1, h2};
        }
    }

public:
    Hash(const string &s) {
        n = s.size();
        p1.assign(n + 1, 1);
        p2.assign(n + 1, 1);
        for (int i = 1; i <= n; ++i) {
            p1[i] = 1LL * p1[i - 1] * B1 % MOD1;
            p2[i] = 1LL * p2[i - 1] * B2 % MOD2;
        }
        hash_prefix(s);
        hash_suffix(s);
    }

    array<int, 2> getSuffix(int l, int r) {
        auto ret = suffix[l];
        int len = r - l + 1;
        r++;
        if (r < n) {
            ret[0] -= 1LL * suffix[r][0] * p1[len] % MOD1;
            if (ret[0] < 0)ret[0] += MOD1;

            ret[1] -= 1LL * suffix[r][1] * p2[len] % MOD2;
            if (ret[1] < 0)ret[1] += MOD2;

        }
        return ret;
    }

    array<int, 2> getPrefix(int l, int r) {
        auto ret = prefix[r];
        int sz = r - l + 1;
        l--;
        if (l >= 0) {

            ret[0] -= 1LL * prefix[l][0] * p1[sz] % MOD1;
            if (ret[0] < 0)ret[0] += MOD1;

            ret[1] -= 1LL * prefix[l][1] * p2[sz] % MOD2;
            if (ret[1] < 0)ret[1] += MOD2;
        }
        return ret;
    }
};
