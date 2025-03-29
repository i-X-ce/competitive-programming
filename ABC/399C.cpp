/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;
long long ans = 0;
set<long long>visG;

void dfs(vector<vector<long long>>&edge, set<long long>&vis, long long v, long long oya){
  if (vis.count(v)){
    ans++;
    // cout << "v:" << v+1 << " oya:" << oya+1 << endl;
    return;
  }
  vis.insert(v);
  visG.erase(v);
  for (long long i=0;i<edge.at(v).size();i++){
    if (oya == edge.at(v).at(i)){
      continue;
    }
    dfs(edge, vis, edge.at(v).at(i), v);
  }
  // vis.erase(v);
}

int main() {
  long long n, m; cin >> n >> m;
  vector<vector<long long>>edge(n, vector<long long>(0));
  for (int i=0;i<m;i++){
    long long u, v; cin >> u >> v;
    u--; v--;
    edge.at(u).push_back(v);
    edge.at(v).push_back(u);
  }
  for (int i=0;i<n;i++) visG.insert(i);
  set<long long>vis;
  while(visG.size() > 0){
    auto it = visG.begin();
    dfs(edge, vis, *it, -1);
  }
  cout << ans / 2 << endl;
  return 0;
}