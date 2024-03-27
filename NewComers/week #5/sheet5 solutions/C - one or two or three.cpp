#include <bits/stdc++.h>    
using namespace std;

int s , e;

int rec(int cur){
  if(cur > e) 
    return 0;

  if(cur == e)
    return 1;

  int ret = 0;
  ret += rec(cur + 1) + rec(cur + 2) + rec(cur + 3);

  return ret;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  

  cin >> s >> e;

  cout << rec(s);

}
