#include <bits/stdc++.h>    
using namespace std;

int fun(int n , int k , int ar[]){
  int ans = 0;

  for(int i=0; i<n; i++){
    if(ar[i] >= ar[k - 1] && ar[i] != 0)
      ans++;
  }
  
  return ans;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  
  int n , k;
  cin >> n >> k;
  int ar[n];

  for(int i=0; i<n; i++)
    cin >> ar[i];

  cout << fun(n , k , ar);
}
