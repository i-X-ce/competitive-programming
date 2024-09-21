/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<int>h(n);
  for (int i=0;i<n;i++) cin >> h.at(i);
  set<int>st;
  vector<int>ans(n, 0);
  for (int i=0;i<n-1;i++){
    int index = n-i-2;
    ans.at(index) = ans.at(index+1) + 1;
    auto lcnt = st.lower_bound(h.at(index+1));
    ans.at(index) -= distance(st.begin(), lcnt);
    if (i != 0) st.insert(h.at(index+1));
  }
  for (int i=0;i<n;i++) cout << ans.at(i) << " ";
  cout << endl;
  return 0;
}