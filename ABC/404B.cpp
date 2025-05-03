/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

void Yes() {
  cout << "Yes" << endl;
}

void No() {
  cout << "No" << endl;
}

int main() {
  int n; cin >> n;
  vector<string>s(n), t(n);
  for (int i=0;i<n;i++){
    cin >> s.at(i);
  }
  for (int i=0;i<n;i++){
    cin >> t.at(i);
  }
  int ans = 0;
  for (int r=0;r<4;r++){
    int cnt = r;
    for (int i=0;i<n;i++) for (int j=0;j<n;j++){
      if (s.at(i).at(j) != t.at(i).at(j)) cnt ++;
    }
    vector<string> newS = s;
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++){
        newS.at(j).at(n-i-1) = s.at(i).at(j);
      }
    }
    s = newS;
    if (r == 0) ans = cnt;
    else ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}