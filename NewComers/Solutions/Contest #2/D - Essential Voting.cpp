#include <bits/stdc++.h>    
using namespace std;

int32_t main(){
  cin.tie(0);cin.sync_with_stdio(0);
  cout.tie(0);cout.sync_with_stdio(0);
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      int a = 0 , b = 0 , c = 0;
      for(int i=0; i<n; i++){
        int v;
        cin >> v;
        if(v == 1) a++;
        else if(v == 2) b++;
        else c++;
      }
      if(a > b && a > c){
        cout << "Seif\n";
      } else if (b > a && b > c){
        cout << "Sief\n";
      } else if(c > a && c > b){
        cout << "Saif\n";
      } else {
        cout << "Draw\n";
      }
   }
} 