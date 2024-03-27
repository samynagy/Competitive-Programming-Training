#include <bits/stdc++.h>    
using namespace std;

int fun(int a , int b){
  if(a % b == 0){
      return 0;
    }
    
    return (a - (a % b) + b) - a;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  
  int t;
  cin >> t;
  while(t--){
    int a , b;
    cin >> a >> b;
    cout << fun(a , b) << '\n';
  }
}
