#include <bits/stdc++.h>    
using namespace std;

bool calc(int a , int b , int c){
  return (a + b + c) >= 2;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);    

  int n , m = 0 , c = 0;
  cin >> n;

  for(int i=0; i<n; i++){
    int a , b;
    cin >> a >> b;
    if(a > b) m++;
    else if(b > a) c++;
  }
  if(m > c){
    cout << "Mishka";
  } else if(c > m){
    cout << "Chris";
  } else {
    cout << "Friendship is magic!^^";
  }
}
