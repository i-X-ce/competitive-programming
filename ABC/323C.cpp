/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int>a(m);
  for (int i=0;i<m;i++) cin >> a.at(i);
  vector<string>s(n);
  for (int i=0;i<n;i++) cin >> s.at(i);
  vector<int>r(n);
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++){
      if (s.at(i).at(j) == 'o') r.at(i) += a.at(j);
    }
    r.at(i) += i+1;
  }

  for (int i=0;i<n;i++){
    int maxs = 0;
    for (int j=0;j<n;j++){
      if (i == j) continue;
      maxs = max(maxs, r.at(j));
    }
    int cnt = 0;
    int ks = r.at(i);
    vector<pair<int, bool>>a2(m);
    for (int j=0;j<m;j++){
      if (s.at(i).at(j) == 'x') a2.at(j) = make_pair(a.at(j), true);
      else a2.at(j) = make_pair(a.at(j), false);
    }
    sort(a2.rbegin(), a2.rend());

    for (int j=0;j<m;j++){
      if (ks <= maxs){
        if (a2.at(j).second){
          cnt++;
          ks += a2.at(j).first;
        }
      }else break;
    }
    cout << cnt << endl;
  }
  return 0;
}