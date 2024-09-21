/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>>c(n+m, vector<int>(2));
  for (int i=0;i<n;i++){
    cin >> c.at(i).at(0);
    c.at(i).at(1) = 0;
  }
  for (int i=n;i<n+m;i++){
    cin >> c.at(i).at(0);
    c.at(i).at(1) = 1;
  }
  sort(c.begin(), c.end());
  bool af = false;
  for (int i=0;i<n+m;i++){
    bool af2 = c.at(i).at(1) == 0;
    if (af && af2){
      cout << "Yes" << endl;
      return 0;
    }
    af = af2;
  }
  cout << "No" << endl;
  return 0;
}