/** 
  - find longest Prefix that is palindrome 
  - find longest suffix that is palindrome 
  - find min number of characters to add to convert string to palindrome -> by logic (longset suffix that is palindrome  )  . 
*/
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
    string t = s;
    reverse(t.begin(), t.end());
    ///// reversed + original --->> to get longest  suffix
    ///// original + reversed --->> to get longest  prefix
    s = t + "@" + s;
    vector<int> Failure = ComputeFailureTable(s);
    cout << Failure.back();
}
