//// build failure function ( longest proper prefix equal longest suffix for each suffix )
vector<int> ComputeFailureTable(const string &pat) {
    int n = pat.size();
    vector<int> ret(n);
    for (int i = 1, len{}; i < n; ++i) {
        while (len > 0 and pat[i] != pat[len])
            len = ret[len - 1];
        if (pat[i] == pat[len])++len;
        ret[i] = len;
    }
    return ret;
}

void KMP(const string &s, const string &pat) {
    int n = s.size(), m = pat.size();
    vector<int> Failure = ComputeFailureTable(pat);
    for (int i = 0, len{}; i < n; ++i) {
        while (len > 0 and s[i] != pat[len]) {
            len = Failure[len - 1];
        }
        if (s[i] == pat[len])++len;
        if (len == m) { /// make one matching
            cout << i - m + 1 << endl;
            len = Failure[len - 1];///// fail ur self to catch another match ( overlap )
        }
    }
}
