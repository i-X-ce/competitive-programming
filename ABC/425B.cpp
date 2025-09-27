/*
g++ temp.cpp -I ./ac-library 
./a.out
*/
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(0);
  set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    if (a.at(i) == -1) continue;
    if (st.count(a.at(i))) {
      cout << "No" << endl;
      return 0;
    }
    st.insert(a.at(i));
  }
  for (int i = 1; i <= n; i++) {
    if (st.count(i)) continue;
    b.push_back(i);
  }
  cout << "Yes" << endl;
  for (int i = 0; i < n; i++) {
    if (a.at(i) == -1) {
      int v = b.at(b.size() - 1);
      b.pop_back();
      cout << v << " ";
    } else {
      cout << a.at(i) << " ";
    }
  }
  cout << endl;
  return 0;
}