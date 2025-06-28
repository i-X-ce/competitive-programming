/*
g++ temp.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s, t; cin >> s >> t;
  set<char> st;
  for (char c : t) {
    st.insert(c);
  }
  for (int i=1;i<s.size();i++) {
    if (s.at(i) >= 'A' && s.at(i) <= 'Z') {
      if (!st.count(s.at(i-1))) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}