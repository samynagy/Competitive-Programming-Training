#include <bits/stdc++.h>    
using namespace std;

bool calc(int a , int b , int c){
  return (a + b + c) >= 2;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);    

  int n , ans = 0;
  cin >> n;
  for(int i=0; i<n; i++){
    int a , b , c;
    cin >> a >> b >> c;
    ans += (calc(a , b , c));
  }
  cout << ans;
}
