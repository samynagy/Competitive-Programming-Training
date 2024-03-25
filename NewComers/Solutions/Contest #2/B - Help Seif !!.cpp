#include <bits/stdc++.h>    
using namespace std;


   
main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    long long lst = 1e10+1 , ans = 0 , cnt = 0;
    for(int i=0; i<n; i++){
      long long in;
      cin >> in;
      if(in > lst){
        cnt++;
        ans = max(ans , cnt);
      } else {
        cnt = 0;
      }
      lst = in;
    }
    cout << ans << '\n';
  }

}