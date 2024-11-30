/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<int>a(n),b(m);
  for (int i=0;i<n;i++) cin >> a.at(i);
  for (int i=0;i<m;i++) cin >> b.at(i);
  vector<pair<int, int>>ai(n);
  {
    int mina = a.at(0), mini = 0;
    ai.at(0) = make_pair(mina, mini);
    for (int i=1;i<n;i++){
      if (a.at(i) < mina){
        mina = a.at(i);
        mini = i;
      }
      ai.at(i) = make_pair(mina, mini);
    }
    sort(ai.begin(), ai.end());
  }
  vector<int>ans(m, -1);
  for (int i=0;i<m;i++){
    if (b.at(i) < ai.at(0).first) continue;
    auto it = upper_bound(ai.begin(), ai.end(), b.at(i), [](int value, pair<int, int>&p){
      return value < p.first;
    }) - 1;
    ans.at(i) = (*it).second + 1;
  }
  for (int i=0;i<m;i++){
    cout << ans.at(i) << endl;
  }
  return 0;
}