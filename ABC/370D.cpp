/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  long long h, w, q; cin >> h >> w >> q;
  vector<set<long long>>hst(h);
  vector<set<long long>>wst(w);
  for (int i=0;i<h;i++){
    for (int j=0;j<w;j++){
      hst.at(i).insert(j);
      wst.at(j).insert(i);
    }
  }
  for (int i=0;i<q;i++){
    long long r, c; cin >> r >> c;
    r--; c--;
    if (hst.at(r).count(c)){
      hst.at(r).erase(c);
      wst.at(c).erase(r);
      continue;
    }
    auto hitr = hst.at(r).lower_bound(c), witr = wst.at(c).lower_bound(r);
    if (hitr != hst.at(r).begin()){
      wst.at(*prev(hitr)).erase(r);
      hst.at(r).erase(prev(hitr));
    }
    if (hitr != hst.at(r).end()){
      wst.at(*hitr).erase(r);
      hst.at(r).erase(hitr);
    }
    if (witr != wst.at(c).begin()){
      hst.at(*prev(witr)).erase(c);
      wst.at(c).erase(prev(witr));
    }
    if (witr != wst.at(c).end()){
      hst.at(*witr).erase(c);
      wst.at(c).erase(witr);
    }
  }
  long long ans = 0;
  for (int i=0;i<h;i++) ans += hst.at(i).size();
  cout << ans << endl;
  return 0;
}