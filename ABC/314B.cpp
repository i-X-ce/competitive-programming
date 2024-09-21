/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>>roulettemin(37, vector<int>(2, 100));
  vector<vector<int>>list(n, vector<int>(0));
  for (int i=0;i<n;i++){
    int c; cin >> c;
    for (int j=0;j<c;j++){
      int a; cin >> a;
      roulettemin.at(a).at(0) = min(c, roulettemin.at(a).at(0));
      roulettemin.at(a).at(1)++;
      list.at(i).push_back(a);
    }
  }
  int x; cin >> x;

  vector<int>ans(0);
  int cnt = 0;
  for (int i=0;i<n;i++){
    for (int j=0;j<list.at(i).size();j++){
      if (list.at(i).at(j) == x && list.at(i).size() == roulettemin.at(x).at(0)){
        cnt++;
        ans.push_back(i+1);
      }
    }
  }

  cout << cnt << endl;
  for (int i=0;i<cnt;i++) cout << ans.at(i) << " ";
  return 0;

}