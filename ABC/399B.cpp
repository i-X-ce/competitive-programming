/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n; cin >> n;
  vector<vector<int>>p(n, vector<int>(2));
  for (int i=0;i<n;i++){
    cin >> p.at(i).at(0);
    p.at(i).at(1) = i;
  }
  sort(p.rbegin(), p.rend());
  int r = 1;
  int value = p.at(0).at(0);
  vector<int>ans(n, 0);
  ans.at(p.at(0).at(1)) = r;
  for (int i=1;i<n;i++){
    if (p.at(i).at(0) == value){
      ans.at(p.at(i).at(1)) = r;
    } else {
      r = i + 1;
      value = p.at(i).at(0);
      ans.at(p.at(i).at(1)) = r;
    }
  }
  for (int i=0;i<n;i++){
    cout << ans.at(i) << endl;
  }
  return 0;
}