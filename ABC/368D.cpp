/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>&th, vector<bool>&mpos, int pos, set<int>&st, int hos, bool ok){
  if (mpos.at(pos)) return hos;
  if (st.count(pos)) ok = true;
  if (th.at(pos).size() == 1) return ok ? 1 : 0;
  mpos.at(pos) = true;
  int hoso = hos;
  for (int i=0;i<th.at(pos).size();i++){
    hos += dfs(th, mpos, th.at(pos).at(i), st, hoso, ok);
  }
  cout << pos+1 << " " << hos << endl;

  return hos;
}

int main() {
  int n, k; cin >> n >> k;
  vector<vector<int>>th(n, vector<int>(0));
  for (int i=0;i<n-1;i++){
    int a, b; cin >> a >> b;
    a--; b--;
    th.at(a).push_back(b); th.at(b).push_back(a);
  }
  vector<bool>mpos(n, false);
  set<int>st;
  vector<int>v(k);
  for (int i=0;i<k;i++) cin >> v.at(i);
  for (int i=0;i<k;i++) st.insert(v.at(i));
  cout << dfs(th, mpos, 0, st, 0, false) << endl;
  return 0;
}