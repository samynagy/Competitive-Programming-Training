#include <bits/stdc++.h>    
using namespace std;


void fill(int n , int fr[]){
  string s = to_string(n);
  for(int i=0; i<s.size(); i++){
    fr[s[i] - '0']++;
    if(s[i] == '1' && i + 1 < s.size() && s[i + 1] == '0')
      fr[10]++;
  }
}


main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  int k , ar[1000001]{} , cnt = 0;
  cin >> k;

  int fr1[11]{};
  fill(k , fr1);

  for(int i=0; i<=1e6; i++){
    int fr2[11]{};
    fill(i , fr2);


    bool fl = 1;
    for(int j=0; j<11; j++){
      if(fr1[j] != fr2[j])
        fl = 0;
    }

    if(fl){
      cnt++;
      ar[i]++;
    }
  }

  cout << cnt << '\n';
  for(int i=0; i<=1e6; i++){
    if(ar[i]){
      cout << i << '\n';
    }
  }

}