#include <bits/stdc++.h>    
using namespace std;

int N , W;
int w[21] , v[21];

int rec(int idx , int r){
  if(idx == N)
    return 0;

  int ret = 0;
  
  if(w[idx] <= r)
    ret = rec(idx + 1 , r - w[idx]) + v[idx];

  ret = max(ret , rec(idx + 1 , r));

  return ret;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  

  cin >> N >> W;

  for(int i=0; i<N; i++)
    cin >> w[i] >> v[i];

  cout << rec(0 , W);

}
