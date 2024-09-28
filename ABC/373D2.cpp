/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

set<long long>st;

struct Data
{
  bool ok;
  long long v, w;
};

void dfs(vector<vector<Data>>&arms, vector<long long>&ans, long long u, long long value){
  if (st.count(u)) return;
  st.insert(u);
  ans.at(u) = value;
  for (int i=0;i<arms.at(u).size();i++){
    Data d = arms.at(u).at(i);
    long long v = d.v;
    int sign = d.ok ? 1 : -1;
    dfs(arms, ans, v, value + sign * d.w);
  }
}

int main() {
  long long n, m; cin >> n >> m;
  vector<vector<Data>>arms(n, vector<Data>(0));
  for (int i=0;i<m;i++){
    long long u, v, w; cin >> u >> v >> w;
    u--; v--;
    Data d = {true, v, w};
    arms.at(u).push_back(d);
    d = {false, u, w};
    arms.at(v).push_back(d);
  }
  vector<long long>ans(n);
  for (int i=0;i<n;i++){
    dfs(arms, ans, i, 0);
  }
  for (int i=0;i<n;i++) cout << ans.at(i) << " ";
  cout << endl;
  return 0;
}