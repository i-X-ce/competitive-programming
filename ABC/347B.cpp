/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  string s; cin >> s;
  set<string>st;
  int cnt = 0;
  for (int i=0;i<s.size();i++){
    for (int j=1;j<=s.size()-i;j++){
      string sb = s.substr(i, j);
      if (st.count(sb)) continue;
      cnt++;
      st.insert(sb);
    }
  }
  cout << cnt << endl;
  return 0;
}