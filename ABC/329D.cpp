/*
g++ XXX.cpp
./a.out
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
  int n, m; cin >> n >> m;
  map<int, int>amp;
  vector<vector<int>>al(0, vector<int>(2));
  al.push_back({0, 3000000});
  for (int i=0;i<m;i++){
    int a; cin >> a;
    amp[a]++;
    int siz = al.size();
    if (al.at(siz-1).at(0) < amp[a]) al.push_back({amp[a], a});
    else if (al.at(siz-1).at(0) == amp[a] && al.at(siz-1).at(1) > a) al.push_back({amp[a], a});
    siz = al.size();
    cout << al.at(siz-1).at(1) << endl;
  }
  return 0;
}