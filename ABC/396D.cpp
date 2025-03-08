/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

long long ans = -1;

struct Path
{
  long long from;
  long long to;
  long long w;
};


void dps(vector<vector<Path>>&path, vector<bool>&visited, long long now, long long xorSum){
  for (Path next: path.at(now)){
    if (visited.at(next.to)) continue;
    long long nextXor = xorSum ^ next.w;
    // cout << now << "->" << next.to << " xor:" << xorSum << endl;
    if (next.to == path.size()-1){
      ans = ans != -1 ? min(ans, nextXor) : nextXor;
      continue;
    }
    visited.at(next.to) = true;
    dps(path, visited, next.to, nextXor);
    visited.at(next.to) = false;
  }
}

int main() {
  long long n, m; cin >> n >> m;
  vector<vector<Path>>path(n, vector<Path>(0));
  for (long long i=0;i<m;i++){
    long long u, v, w; cin >> u >> v >> w;
    u--; v--;
    path.at(u).push_back({u, v, w});
    path.at(v).push_back({v, u, w});
  }
  vector<bool>visited(n, false);
  visited.at(0) = true;
  dps(path, visited, 0, 0);
  cout << ans << endl;
  return 0;
}