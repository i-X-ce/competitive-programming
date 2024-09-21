/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void dfs(int fromindex, int index, vector<vector<bool>>dmp, ector<vector<bool>>mmp, vector<vector<int>>&ds, vector<vector<int>>&ds, int cnt, vector<int>dlist, vector<int>mlist, bool df){
  if (df){
    dmp.at(fromindex) = false;
    for (int i=0;i<)
  }else{

  }

  mp.at(fromindex).at(index) = false; mp.at(index).at(fromindex) = false;
  dmlist.push_back(index);
  ans = max(ans, cnt);
  cout << fromindex << " " << index << " " << cnt << endl;
  for (int i=0;i<dms.at(i).size();i++){
    if (!mp.at(index).at(i)) continue;
    bool ok = true;
    for (int j=0;j<dmlist.size();j++){
      ok = mp.at(i).at(dmlist.at(j)) & ok;
    }
    if (!ok) continue;
    dfs(index, i, mp, dms, cnt+1, dmlist);
  }
}

int main() {
  int n, m, r; cin >> n >> m >> r;
  vector<vector<int>>ds(n, vector<int>(0));
  vector<vector<int>>ms(m, vector<int>(0));
  for (int i=0;i<r;i++){
    int bfd, bfm; cin >> bfd >> bfm;
    bfd--; bfm--;
    ds.push_back(bfm); bfm.push_back(bfd);
  }
  vector<vector<bool>>mp(n+m, vector<bool>(n+m, true));
  vector<int>dlist(0);
  for (int i=0;i<n+m;i++){
    dfs(0, 0, mp, dms, 1, dmlist);
  }
  ans = max({n, m, ans});
  cout << ans << endl;
  return 0;
}