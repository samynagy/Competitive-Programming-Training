#include <bits/stdc++.h>    
using namespace std;

int A , B;

int rec(int a , int b){
  if(a > b)
    return 0;

  return rec(a * 3 , b * 2) + 1;
}

main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);  
  
  cin >> A >> B;
  cout << rec(A , B);
}
