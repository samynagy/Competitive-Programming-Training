//// For each prefix, count all occurrences as a substring.

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

void smsm() {

    string s;
    cin >> s;
    int n = s.size();
    vector<int> Fail = ComputeFailureTable(s);
    vector<int> frq(n + 1);
    for (int i: Fail)frq[i]++;
    for (int i = n - 1; i; --i) {
        frq[Fail[i - 1]] += frq[i];
    }
    frq.erase(frq.begin());
    for (int &i: frq)++i;

}
