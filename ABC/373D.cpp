/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long n, m;
set<int>st;
map<int, set<int>>path; // そっち方向にパスがあるか
map<int, map<int, int>> wws; // 重み

void dfs(vector<vector<long long>>&arms, vector<long long>&ans, int u, int value){
  if (st.count(u)) return;
  st.insert(u);
  ans.at(u) = value;
  // cout << u << "=" << ans.at(u) << ": +";
  for (int i=0;i<arms.at(u).size();i++){
    int v = arms.at(u).at(i);
    int sign = path[u].count(v) ? 1 : -1;
    // cout << sign * wws[u][v] << endl;
    dfs(arms, ans, arms.at(u).at(i), value + sign * wws[u][v]);
  }
}

int main() {
  cin >> n >> m;
  vector<vector<long long>>arms(n, vector<long long>(0));
  vector<long long>ans(n, 0);
  for (int i=0;i<m;i++){
    long long u, v, w; cin >> u >> v >> w;
    u--; v--;
    arms.at(u).push_back(v);
    arms.at(v).push_back(u);
    wws[u][v] = w;
    wws[v][u] = w;
    path[u].insert(v);
  }
  for (int i=0;i<n;i++){
    if (st.size() >= n) break;
    dfs(arms, ans, i, 0);
  }
  for (int i=0;i<n;i++) cout << ans.at(i) << " ";
  cout << endl;
  return 0;
}