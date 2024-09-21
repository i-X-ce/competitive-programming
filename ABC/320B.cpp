/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int ans = 1;
  string s, sr;
  cin >> s;
  sr = s;
  reverse(sr.begin(), sr.end());
  for (int i=0;i<s.size();i++){
    for (int j=1;j<s.size()-i+1;j++){
      string sbf = s.substr(i, j);
      if (sr.find(sbf) != -1){
        ans = max(ans, j);
      }
    }
  }
  cout << ans << endl;
  return 0;
}