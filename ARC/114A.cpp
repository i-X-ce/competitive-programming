/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  set<int> st;
  vector<int> x(n);
  for (int i=0;i<n;i++) cin >> x.at(i);
  for (int i=0;i<n;i++) {
    for (int j=2;j<=x.at(i);j++) {
      if (x.at(i) % j == 0) {
        st.insert(j);
        break;
      }
    }
  }
  int ans = 1;
  for (int v : st) {
    ans *= v;
  }
  cout << ans << endl;
  return 0;
}