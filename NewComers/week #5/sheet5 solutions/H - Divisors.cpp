#include <bits/stdc++.h>    
using namespace std;

void fun(int n){
  for(int i=1; i <= n; i++){
    if(n % i == 0){
      cout << i << '\n';
    }
  }
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  
  int n;
  cin >> n;
  
  fun(n);
}
