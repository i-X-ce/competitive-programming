/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<string> s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  set<string> st;
  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      if (i == j) continue;
      st.insert(s.at(i) + s.at(j));
    }
  }
  cout << st.size() << endl;
  return 0;
}