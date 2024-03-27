#include <bits/stdc++.h>    
using namespace std;

long long n;

bool rec(long long cur){
  if(cur == n)
    return true;
  if(cur > n)
    return false;

  bool ret = false;

  ret |= rec(cur * 10);
  ret |= rec(cur * 20);

  return ret;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    cout << (rec(1LL) ? "YES" : "NO") << '\n';
  }
}
