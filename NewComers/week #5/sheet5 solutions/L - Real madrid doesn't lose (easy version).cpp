#include <bits/stdc++.h>    
using namespace std;

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  
  int p;
  cin >> p;
  int w = 0 , d = 0;
  while(p >= 3){
    w++;
    p -= 3;
  }
  d = p;
  cout << w << '\n' << d;
}
