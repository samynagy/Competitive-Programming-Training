#include <bits/stdc++.h>    
using namespace std;


main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n , mx = 0 , ans = 1;
    cin >> n;
    for(int i=1; i<=n; i++){
      int cnt = 0;
      int temp = i;
      while(temp % 2 == 0){
        cnt++;
        temp /= 2;
      }
      if(mx < cnt){
        ans = i;
        mx = cnt;
      }
    }

    cout << ans << '\n';
  }
}