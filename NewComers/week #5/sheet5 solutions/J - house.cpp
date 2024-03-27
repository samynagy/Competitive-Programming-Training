#include <bits/stdc++.h>    
using namespace std;

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  

  int ar[4];
  for(int i=0; i<4; i++)
    cin >> ar[i];
  sort(ar , ar + 4);
  int ans = 0;
  for(int i=1; i<4; i++)
    ans += (ar[i] == ar[i - 1]);
  
  cout << ans;
}
