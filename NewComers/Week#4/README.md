## strings functions :
https://www.geeksforgeeks.org/cpp-string-functions/

## video :
https://youtu.be/HOB-Ey3tEqY?si=l0VuSQHLeyfqMsHI

## code of the last problem :

```
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    
    string s ; cin >> s ;

    sort(s.begin(),s.end()) ;
    int cn =1 ; //aaabbc
    for(int i= 1 ; i<=s.size() ;i++)
    {
        if(s[i] != s[i-1])
        {
            cout << s[i-1] << " : " << cn<<"\n"  ;
            cn =1 ;
            continue ;
        }
        else
        {
            cn++ ;
        }

    }
}

```

last problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
