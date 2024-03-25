#include <bits/stdc++.h>    
using namespace std;

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  

  int n , m;
  cin >> n >> m;
  string ar[n];
  for(int i=0; i<n; i++)
    cin >> ar[i];
  for(int i=0; i<m+2; i++){
    cout << '#';
  }
  cout << '\n';
  for(int i=0; i<n; i++){
    cout << '#' << ar[i] << '#' << '\n';
  }
  for(int i=0; i<m+2; i++){
    cout << '#';
  }
}