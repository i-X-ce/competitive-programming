/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  map<int, set<int>>mp;
  vector<int>a(m);
  vector<int>b(m);
  for (int i=0;i<m;i++) cin >> a.at(i);
  for (int i=0;i<m;i++) cin >> b.at(i);
  for (int i=0;i<m;i++){
    int af = a.at(i), bf = b.at(i);
    if (af == bf){
      cout << "No" << endl;
      return 0;
    }

    if (mp[af].count(bf) || mp[bf].count(af)) continue;
    for (auto itr=mp[af].begin();itr!=mp[af].end();itr++){
      if (mp[*itr].count(bf)){
        cout << "No" <<  endl;
        return 0;
      }
    }
    for (auto itr=mp[bf].begin();itr!=mp[bf].end();itr++){
      if (mp[*itr].count(af)){
        cout << "No" << endl;
        return 0;
      }
    }
    mp[af].insert(bf);
    mp[bf].insert(af);
  }
  cout << "Yes" << endl;
  return 0;
}