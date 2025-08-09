/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s; cin >> s;
  vector<int> p(0);
  for (int i=0;i<s.size();i++) {
    if (s.at(i) == 't') {
      p.push_back(i);
    }
  }
  double ans = 0;
  if (p.size() > 0) {
    for (int i=0;i<p.size();i++) {
      for (int j=i+1;j<p.size();j++) {
        double len = p.at(j) - p.at(i) + 1;
        double tcnt = j - i + 1;
        ans = max(ans, (tcnt - 2) / (len - 2));
      }
    }
  }
  cout << fixed << setprecision(14) << ans << endl;
  return 0;
}