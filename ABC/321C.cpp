/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int k; cin >> k;
  k++;
  int cnt = 0;
  for (int i=1;i<=10;i++){
    for (int j=0;j<(1 << 10);j++){
      bitset<10>bitcnt(j);
      if (bitcnt.count() == i) cnt++;
      if (cnt == k){
        string ans = "";
        for (int l=0;l<10;l++){
          if (bitcnt.test(9-l)){
            ans.push_back('0'+9-l);
          }
        }
        cout << ans << endl;
        return 0;
      }
    }
  }
  
  return 0;
}