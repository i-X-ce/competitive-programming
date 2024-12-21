/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long n, m; cin >> n >> m;
  long long sx, sy; cin >> sx >> sy;
  map<long long, set<long long>>mpx, mpy;
  for (int i=0;i<n;i++){
    int x, y; cin >> x >> y;
    mpx[x].insert(y);
    mpy[y].insert(x);
  }
  int ans = 0;
  for (int i=0;i<m;i++){
    char d; cin >> d;
    long long c; cin >> c;
    set<long long>& target = (d == 'U' || d == 'D' ? mpx[sx] : mpy[sy]);
    long long start, end;

    if (d == 'U'){
      start = sy; end = sy + c;
      sy = end;
    }
    else if (d == 'D'){
      start = sy; end = sy - c;
      sy = end;
    }
    else if (d == 'L'){
      start = sx; end = sx - c;
      sx = end;
    }
    else if (d == 'R'){
      start = sx; end = sx + c;
      sx = end;
    }
    auto sit = lower_bound(target.begin(), target.end(), start);
    auto eit = upper_bound(target.begin(), target.end(), end);
    vector<pair<long long, long long>>erases;
    for (auto it=sit;it!=eit;it++){
      if (d == 'U' || d == 'D'){
        erases.push_back({sx, *it});
      } else {
        erases.push_back({*it, sy});
      }
      ans++;
    }
    for (auto p:erases){
      if (d == 'U' || d == 'D'){
        mpx[p.first].erase(p.second);
        mpy[p.second].erase(p.first);
      } else {
        mpy[p.second].erase(p.first);
        mpx[p.first].erase(p.second);
      }
    }
  }
  cout << sx << " " << sy << " " << ans << endl;
  cout << (mpy[2].count(1) ? "true" : "false" )<< endl;

  return 0;
}